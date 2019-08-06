# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aconstan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/28 10:21:35 by aconstan          #+#    #+#              #
#    Updated: 2019/07/28 21:18:10 by aconstan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= eval_expr
CC		= gcc
CFLAGS	+= -Wall -Wextra -Werror
SRC		+= ft_elim.c
SRC		+= ft_number.c
SRC		+= ft_primary.c
SRC		+= ft_putchar.c
SRC		+= ft_secondary.c
SRC		+= ft_verify.c
SRC		+= main.c
OBJ		= $(SRC:.c=.o)
HFILES	= *.h

all: $(NAME)

$(NAME): compile

compile:
	$(CC) $(CFLAGS) -c $(SRC) -I./include $(HFILES)
	$(CC) $(OBJ) -o $(NAME)
	
clean:
	/bin/rm -f $(OBJ)

fclean:clean
	/bin/rm -f $(NAME)

re: fclean all
