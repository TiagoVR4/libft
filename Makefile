NAME = libft.a

GET_NEXT_LINE_PATH = get_next_line
GET_NEXT_LINE_SRC = $(GET_NEXT_LINE_PATH)/get_next_line.c \
					$(GET_NEXT_LINE_PATH)/get_next_line_utils.c \
					$(GET_NEXT_LINE_PATH)/get_next_line_bonus.c \
					$(GET_NEXT_LINE_PATH)/get_next_line_utils_bonus.c
GET_NEXT_LINE_ARC = $(GET_NEXT_LINE_SRC:.c=.o)

FT_PRINTF_PATH = ft_printf
FT_PRINTF_ARC = $(FT_PRINTF_PATH)/libftprintf.a

SRC	=  ft_bzero.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c \
	ft_memmove.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_split.c ft_memcpy.c ft_strlcpy.c ft_strrchr.c ft_atol.c free_array.c

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC	= cc
CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ) $(GET_NEXT_LINE_ARC) $(FT_PRINTF_ARC)
	@ar -rcs $(NAME) $(OBJ) $(GET_NEXT_LINE_ARC) $(FT_PRINTF_ARC)
	@echo "[libft.a created successfully!]"

bonus: $(OBJ) $(OBJ_BONUS) $(GET_NEXT_LINE_ARC) $(FT_PRINTF_ARC)
	@ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS) $(GET_NEXT_LINE_ARC) $(FT_PRINTF_ARC)
	@echo "[libft.a with bonus created successfully!]"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(FT_PRINTF_ARC):
	@if [ -d "$(FT_PRINTF_PATH)" ]; then \
		echo "[ft_printf] folder found 🖔"; \
	else \
		echo "Getting ft_printf"; \
		git clone https://github.com/TiagoVR4/ft_printf.git; \
		echo "Done downloading ft_printf"; \
	fi
	@$(MAKE) -C $(FT_PRINTF_PATH)

$(GET_NEXT_LINE_PATH):
	@if [ -d "$(GET_NEXT_LINE_PATH)" ]; then \
		echo "[get_next_line] folder found 🖔"; \
	else \
		echo "Getting get_next_line"; \
		git clone https://github.com/TiagoVR4/Get_Next_Line.git; \
		echo "Done downloading get_next_line"; \
	fi
	@$(CC) $(CFLAGS) $(GET_NEXT_LINE_SRC) -C $(GET_NEXT_LINE_PATH)

clean:
	@rm -f $(OBJ) $(OBJ_BONUS) $(GET_NEXT_LINE_ARC)
	@echo "[All object files cleaned!]"

fclean: clean
	@rm -f $(NAME)
	@echo "[All files cleaned!]"

re: fclean all
	@echo "[Recompiled all files!]"

.PHONY: all clean fclean re bonus