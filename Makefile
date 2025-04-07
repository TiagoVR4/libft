# Define colors for output messages
RED = \033[1;31m
GRN = \033[1;32m
YLW = \033[1;33m
BLU = \033[1;34m
MGN = \033[1;35m
CYN = \033[1;36m
D = \033[0m


NAME = libft.a

# Get Next Line paths and source files
GET_NEXT_LINE_PATH = get_next_line
GET_NEXT_LINE_SRC = $(GET_NEXT_LINE_PATH)/get_next_line.c \
					$(GET_NEXT_LINE_PATH)/get_next_line_utils.c \
					$(GET_NEXT_LINE_PATH)/get_next_line_bonus.c \
					$(GET_NEXT_LINE_PATH)/get_next_line_utils_bonus.c
GET_NEXT_LINE_ARC = $(GET_NEXT_LINE_SRC:.c=.o)

# ft_printf paths and archive file
FT_PRINTF_PATH = ft_printf
FT_PRINTF_ARC = $(FT_PRINTF_PATH)/libftprintf.a

# Main libft source files
SRC	=  ft_bzero.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c \
	ft_memmove.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_split.c ft_memcpy.c ft_strlcpy.c ft_strrchr.c ft_atol.c free_array.c

# Bonus functions for linked list operations
SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

# Object files
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

# Compiler settings
CC	= cc
CFLAGS = -Wall -Wextra -Werror -g

# Main rule - build libft.a after dependencies are met
all: deps $(NAME)

# Check and download dependencies if needed
deps: get_gnl get_ft_printf
	@echo "[$(GRN)Nothing to be done!$(D)]"

# Download ft_printf if not present
get_ft_printf:
	@if [ -d "$(FT_PRINTF_PATH)" ]; then \
		echo "[$(GRN)ft_printf$(D)] folder found 🖔"; \
	else \
		echo "Getting ft_printf"; \
		git clone git@github.com:TiagoVR4/ft_printf.git; \
		echo "$(GRN)Done downloading ft_printf$(D)"; \
	fi

# Download get_next_line if not present
get_gnl:
	@if [ -d "$(GET_NEXT_LINE_PATH)" ]; then \
		echo "[$(GRN)Get_Next_Line$(D)] folder found 🖔"; \
	else \
		echo "Getting $(YLW)Get_Next_Line$(D)"; \
		git clone git@github.com:TiagoVR4/Get_Next_Line.git get_next_line; \
		echo "$(GRN)Done downloading Get_Next_Line$(D)"; \
	fi

# Create the main library archive - combining libft, get_next_line and ft_printf
$(NAME): $(LIBFT_ARC) $(GET_NEXT_LINE_ARC) $(OBJ)
	@echo "$(CYN)Creating libft archive...$(D)"
	@ar -rcs $(OBJ) $(FT_PRINTF_ARC) $(GET_NEXT_LINE_ARC) -o $(NAME)
	@echo "[$(GRN)libft.a created successfully!$(D)]"

# Include bonus functions in the library
bonus: $(OBJ) $(OBJ_BONUS) $(GET_NEXT_LINE_ARC) $(FT_PRINTF_ARC)
	@echo "$(CYN)Creating libft archive with bonus...$(D)"
	@ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS) $(GET_NEXT_LINE_ARC) $(FT_PRINTF_ARC)
	@echo "[$(GRN)libft.a with bonus created successfully!$(D)]"

# Generic rule for compiling .c to .o
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Compile ft_printf
$(FT_PRINTF_ARC):
	@$(MAKE) $(FT_PRINTF_PATH) all


#------------------------------------------------------------------------------#
#								CLEANING RULES								   #
#------------------------------------------------------------------------------#

# Remove all object files
clean:
	@rm -f $(OBJ) $(OBJ_BONUS) $(GET_NEXT_LINE_ARC)
	@echo "[$(GRN)All object files cleaned!$(D)]"

# Remove all generated files including the library
fclean: clean
	@rm -f $(NAME)
	@echo "[$(GRN)All files cleaned!$(D)]"

# Rebuild everything from scratch
re: fclean all
	@echo "[$(GRN)Recompiled all files!$(D)]"

# Declare phony targets (targets that don't create files with these names)
.PHONY: all clean fclean re bonus deps get_gnl get_ft_printf