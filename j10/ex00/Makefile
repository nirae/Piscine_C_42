# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/25 10:39:32 by ndubouil          #+#    #+#              #
#    Updated: 2017/07/25 17:55:31 by ndubouil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
NAME = libft.a 
DR = srcs
SRCC =	$(DR)/ft_putchar.c	\
	  	$(DR)/ft_putstr.c	\
	  	$(DR)/ft_strcmp.c	\
	  	$(DR)/ft_strlen.c	\
	  	$(DR)/ft_swap.c

HEADERS = includes/ft.h

SRCO = ft_putchar.o		\
	   ft_putstr.o		\
	   ft_strcmp.o		\
	   ft_strlen.o		\
	   ft_swap.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCC) -I $(HEADERS)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

re: fclean all
