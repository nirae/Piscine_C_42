# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/27 11:12:04 by ndubouil          #+#    #+#              #
#    Updated: 2017/07/27 11:13:07 by ndubouil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= do-op

HEADER	= includes/

SRC		= srcs/

MAIN	= $(SRC)do_op.c

FT		= $(SRC)ft_add.c	\
		  $(SRC)ft_atoi.c	\
		  $(SRC)ft_div.c	\
		  $(SRC)ft_mod.c	\
		  $(SRC)ft_print.c	\
		  $(SRC)ft_prod.c	\
		  $(SRC)ft_sub.c	

OBJ		= ft_add.o			\
		  ft_atoi.o			\
		  ft_div.o			\
		  ft_mod.o			\
		  ft_print.o		\
		  ft_prod.o			\
		  ft_sub.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(FT)
	$(CC) -I$(HEADER) $(CFLAGS) $(MAIN) $(OBJ) -o $(NAME)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
