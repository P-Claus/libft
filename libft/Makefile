# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 17:51:39 by pclaus            #+#    #+#              #
#    Updated: 2023/10/26 18:13:50 by pclaus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra -I./includes

SOURCES = ./srcs/ft_atoi.c ./srcs/ft_bzero.c ./srcs/ft_calloc.c ./srcs/ft_isalnum.c ./srcs/ft_isalpha.c ./srcs/ft_isascii.c ./srcs/ft_isdigit.c ./srcs/ft_isprint.c ./srcs/ft_memchr.c ./srcs/ft_memcmp.c ./srcs/ft_memmove.c ./srcs/ft_memset.c ./srcs/ft_putchar_fd.c ./srcs/ft_putstr_fd.c ./srcs/ft_strchr.c ./srcs/ft_strdup.c ./srcs/ft_strjoin.c ./srcs/ft_strlcat.c ./srcs/ft_strlcpy.c ./srcs/ft_strlen.c ./srcs/ft_strncmp.c ./srcs/ft_strnstr.c ./srcs/ft_strrchr.c ./srcs/ft_substr.c ./srcs/ft_tolower.c ./srcs/ft_toupper.c
OBJ_FILES = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putstr_fd.o ft_strchr.o ft_strdup.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_substr.o ft_tolower.o ft_toupper.o

all: $(NAME)

$(NAME):
	echo "making the library"
	@cc $(CFLAGS) -c $(SOURCES)
	@ar rcs $(NAME) $(OBJ_FILES)

clean:
	@rm -f $(OBJ_FILES)

fclean: clean
	@rm -f $(NAME)
