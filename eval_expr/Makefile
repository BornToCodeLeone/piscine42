# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lverniss <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/10/03 21:53:47 by lverniss          #+#    #+#              #
#    Updated: 2013/10/03 21:53:49 by lverniss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS =
NAME = eval_expr
SRC = ft_converter.c \
	  ft_putnbr.c \
	  main.c \
	  ft_operation.c \
	  ft_parser.c \
	  ft_strlen.c \
	  ft_putchar.c \
	  eval_expr.c
LIB_DIR = ./library
BIN_DIR = .
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@($(CC) -o $(NAME) $(OBJ))

%.o: %.c
	@($(CC) -o $@ -c $< $(CFLAGS))

.PHONY: clean fclean all re

clean:
	@(rm -rf $(OBJ))

fclean: clean
	@(rm -rf $(NAME))

re: fclean all
