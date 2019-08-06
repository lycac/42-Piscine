# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aconstan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 10:47:28 by aconstan          #+#    #+#              #
#    Updated: 2019/07/25 21:51:24 by aconstan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
SRCSFILES	= ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEADERFILES	= ./includes/*.h
OBJFILES	= *.o
AR			= ar rc

all:	$(NAME) clean

$(NAME): compile create

compile:
	$(CC) $(CFLAGS) -c $(SRCSFILES) -I./include $(HEADERFILES)

create:
	$(AR) $(NAME) $(OBJFILES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJFILES)

fclean: clean
	/bin/rm -f $(NAME)
