# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnarkcha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 11:26:17 by cnarkcha          #+#    #+#              #
#    Updated: 2023/05/20 17:15:11 by cnarkcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

SRCS = ft_printf.c ft_formats.c \ 
	   print_c.c print_s.c print_p.c print_di.c print_u.c print_x.c

OBJS = $(SRCS: .c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
