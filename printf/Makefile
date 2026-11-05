# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abeljami <abeljami@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/27 09:44:14 by abeljami          #+#    #+#              #
#    Updated: 2026/10/27 11:30:12 by abeljami         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

SRCS =  ft_printf.c \
      ft_putchar.c \
      ft_putstr.c \
      ft_printptr.c \
      ft_putint.c \
      ft_putunsigned.c \
      ft_puthex.c \
	  ft_itoa.c

INCLUDE = ft_printf.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean