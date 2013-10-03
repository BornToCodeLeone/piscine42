# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lverniss <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/09/25 18:07:01 by lverniss          #+#    #+#              #
#    Updated: 2013/09/26 22:38:18 by lverniss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

DSOURCE = srcs/

SOURCE = $(DSOURCE)ft_putchar.c \
		 $(DSOURCE)ft_putstr.c \
		 $(DSOURCE)ft_strcmp.c \
		 $(DSOURCE)ft_strlen.c \
		 $(DSOURCE)ft_swap.c

HEAD = includes/

OBJECT = ft_putchar.o \
		 ft_putstr.o \
		 ft_strcmp.o \
		 ft_strlen.o \
		 ft_swap.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SOURCE) -I $(HEAD)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
