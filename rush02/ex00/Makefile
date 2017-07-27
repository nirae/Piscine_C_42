# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceugene <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/23 15:12:34 by ceugene           #+#    #+#              #
#    Updated: 2017/07/23 15:22:48 by ceugene          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = analyse.c		\
	  basics.c		\
	  ft_display.c	\
	  ft_display2.c	\
	  ft_split.c	\
	  main.c		\
	  models.c		\
	  models2.c		\

FLAGS = -Wall -Wextra -Werror

$(NAME): all

all:
	cc $(FLAGS) -I./header.h $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

