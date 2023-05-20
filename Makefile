# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 11:26:17 by cnarkcha          #+#    #+#              #
#    Updated: 2023/05/20 12:40:30 by cnarkcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

SRCS = ft_printf.c

OBJS = $(SRCS: .c=.o)

all:

clean:

fclean:

re:

.PHONY: all clean fclean re
