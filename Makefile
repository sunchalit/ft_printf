# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 11:26:17 by cnarkcha          #+#    #+#              #
#    Updated: 2023/04/29 11:31:45 by cnarkcha         ###   ########.fr        #
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
