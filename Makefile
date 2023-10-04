# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: czheng <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 16:20:47 by czheng            #+#    #+#              #
#    Updated: 2023/09/23 16:20:49 by czheng           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a
CC 	= gcc
CFLAGS 	= -Wall -Werror -Wextra
SRC 	= ft_printf.c ft_print_all.c \

OBJ 	= $(SRC:.c=.o)

###

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
