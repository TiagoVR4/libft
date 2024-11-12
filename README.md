# libft

Libft is my first project for the 42 course. The project requires recreating some functions from the C standard library and creating some auxiliary functions.

## Table of Contents

- [Introduction](#introduction)
- [Functions](#Functions)
- [Bonus Functions](#Bonus_Functions)
- [Installation](#installation)
- [Usage](#usage)
- [Compilation](#compilation)

## Introduction

The goal of Libft is to create a personal library with some functions from the C standard library and others that manipulate strings, memory, or arrays.

## Functions

- `ft_atoi.c` Converts a string to an int.
- `ft_bzero.c` Fills a memory area with '\0'.
- `ft_calloc.c` Allocates memory for an array and initializes all bytes to '\0'.
- `ft_isalnum.c` Checks if a character is alphanumeric.
- `ft_isalpha.c` Checks if a character is alphabetic.
- `ft_isascii.c` Checks if a character is part of the ASCII table.
- `ft_isdigit.c` Checks if a character is a digit.
- `ft_isprint.c` Checks if a character is printable.
- `ft_itoa.c` Converts an int to a string.
- `ft_memchr.c` Searches for a character in a byte string.
- `ft_memcmp.c` Compares two byte strings.
- `ft_memcpy.c` Copies a block of memory.
- `ft_memmove.c` Moves one block of memory to another.
- `ft_memset.c` Fills a string with a specific value.
- `ft_putchar_fd.c` Writes a single character to a file descriptor (fd).
- `ft_putendl_fd.c` Writes a string with a newline to a file descriptor (fd).
- `ft_putnbr_fd.c` Writes an int to a file descriptor.
- `ft_putstr_fd.c` Writes a string to a file descriptor (fd).
- `ft_split.c` Splits a string into an array of strings based on a user-defined character.
- `ft_strchr.c` Searches for a character in a string and returns a pointer to the rest.
- `ft_strdup.c` Creates a copy of a string.
- `ft_striteri.c` Modifies the original string by applying a function to each character.
- `ft_strjoin.c` Concatenates one string with another into a new string.
- `ft_strlcat.c` Concatenates two strings with a buffer limit.
- `ft_strlcpy.c` Copies one string to another with a buffer limit.
- `ft_strlen.c` Counts the length of a string.
- `ft_strmapi.c` Creates a new string by applying a function to each character.
- `ft_strncmp.c` Compares two strings up to a specific length.
- `ft_strnstr.c` Searches for a string within another and copies up to a specific length.
- `ft_strrchr.c` Searches for the last character and returns a pointer to the rest.
- `ft_strtrim.c` Removes all characters from the beginning and end of a string and returns a cleaned string.
- `ft_substr.c` Creates a substring from the start to the desired limit.
- `ft_tolower.c` Converts an uppercase letter to lowercase.
- `ft_toupper.c` Converts a lowercase letter to uppercase.

## Bonus Functions

- `ft_lstnew.c` Creates a new list element.
- `ft_lstadd_front.c` Adds an element to the beginning of a list.
- `ft_lstadd_back.c` Adds an element to the end of a list.
- `ft_lstdelone.c` Deletes a single element from a list.
- `ft_lstclear.c` Clears the entire list.
- `ft_lstiter.c` Applies a function to each element of a list.
- `ft_lstmap.c` Creates a new list by applying a function to each element of an existing list.

## Installation

To compile the library, clone the repository and execute the `make` command:

```bash
git clone 'libft'
cd libft
make
```

## Usage

To use the library, simply include the header `libft.h` and compile with `libft.a`.

## Compilation and Tests

- `make`: Compiles the project.
- `make clean`: Removes object files (.o).
- `make fclean`: Removes object files and the library.
- `make re`: Recompiles from scratch.




# libft

Libft é o meu primeiro Projeto da 42. O projeto requer recriar algumas funções da biblioteca padrão do C e criar algumas funções auxiliares.


## Sumário

- [Introdução](#Introdução)
- [Funções](#Funções)
- [Funções Bônus](#Funções_Bônus)
- [Instalação](#Instalação)
- [Uso](#Uso)
- [Compilação](#Compilação)


## Introdução

O objectivo do Libft é criar uma biblioteca pessoal com algumas funções da biblioteca padrão do C e outras que manipulam String, ao a memória, ou Arrays.


## Funções

- `ft_atoi.c` Converte uma str em um int.
- `ft_bzero.c` Preenche uma área de memória com '\0'.
- `ft_calloc.c` aloca a memória para um array e inicializa todos os bytes por '\0'.
- `ft_isalnum.c` Verifica se um caractere é alfanumérico.
- `ft_isalpha.c` Verifica se um caractere é alfabético.
- `ft_isascii.c` Verifica se um caractere faz parte do ASCII table.
- `ft_isdigit.c` Verifica se um caractere é um dígito.
- `ft_isprint.c` Verifica se um caractere é printable.
- `ft_itoa.c` Converte int para *str.
- `ft_memchr.c` Procura o character numa string de bytes.
- `ft_memcmp.c` Compara 2 strings de bytes.
- `ft_memcpy.c` Copia um bloco de memória.
- `ft_memmove.c` Move 1 str bloco de memória para outra str.
- `ft_memset.c` Preenche uma str c/ um valor específico.
- `ft_putchar_fd.c` Escreve um único char no descritor de arquivo (fd).
- `ft_putendl_fd.c` Escreve uma str com uma quebra de linha no descritor de arquivo (fd).
- `ft_putnbr_fd.c` Escreve um int em um descritor de arquivo.
- `ft_putstr_fd.c` Escreve uma str no descritor de arquivo (fd).
- `ft_split.c` Divide uma str em uma array de str's c/base de char escolhido pelo utilizador.
- `ft_strchr.c` Procura na str o char que queres e recebes o pointer do resto.
- `ft_strdup.c` Cria uma cópia da str.
- `ft_striteri.c` Modifica a str original aplicando uma função a cada caractere.
- `ft_strjoin.c` Concatena uma str com outra numa nova str.
- `ft_strlcat.c` Concatena duas str's com um limitador no Buffer.
- `ft_strlcpy.c` Cópia uma str para outra com um limitador no Buffer.
- `ft_strlen.c` Conta o tamanho da str.
- `ft_strmapi.c` Cria uma nova str aplicando uma função a cada caractere.
- `ft_strncmp.c` Compara duas string até um tamanho específico.
- `ft_strnstr.c` Procura uma str dentro de outra e copia até um tamanho específico.
- `ft_strrchr.c` Procura a última chr e retorna o pointer do resto.
- `ft_strtrim.c` Remove todos chr’s do início e fim da str e retorna uma str limpa.
- `ft_substr.c` Cria uma sub str a partir do start até ao limite desejado.
- `ft_tolower.c` Converte uma letra UPPER-case para lower-case.
- `ft_toupper.c` Converte uma letra lower-case para UPPER-case.

## Funções Bônus

- `ft_lstnew.c` Cria um novo elemento de lista.
- `ft_lstadd_front.c` Adiciona um elemento ao início de uma lista.
- `ft_lstadd_back.c` Adiciona um elemento ao final de uma lista.
- `ft_lstdelone.c` Remove um único elemento de uma lista.
- `ft_lstclear.c` Limpa toda a lista.
- `ft_lstiter.c` Aplica uma função a cada elemento da lista.
- `ft_lstmap.c` Cria uma nova lista aplicando uma função a cada elemento de uma lista existente.


## Instalação

Para compilar o biblioteca, clone o repositório e executa o comando make :

bash
git clone 'libft'
cd libft
make


## Uso

Para usar a biblioteca, basta incluir o header libft.h e compilar com libft.a


## Compilação e testes

- make: Compila o projeto.
- make clean: Remove os arquivos objeto (.o).
- make fclean: Remove os arquivos objeto e a biblioteca.
- make re: serve para recopilar do zero.
