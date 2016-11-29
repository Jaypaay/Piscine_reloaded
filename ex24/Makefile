# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panoirou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 14:12:04 by panoirou          #+#    #+#              #
#    Updated: 2016/11/21 14:29:50 by panoirou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

INCL = 	./includes

all:
	$(CC) -c $(FLAGS) $(SRCS) -I $(INCL)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

clean:
	rm -rf ft_putchar.o;
	rm -rf ft_putstr.o;
	rm -rf ft_strcmp.o;
	rm -rf ft_strlen.o;
	rm -rf ft_swap.o;

fclean: clean
	rm -rf libft.a;

re: fclean
	Make
	
