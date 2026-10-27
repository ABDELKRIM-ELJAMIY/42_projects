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
FLAGS = -Wall -Werror -Wextra
RM = rm -f

SRCS = 

INCLUDE = ft_printf.h

OBJS  = $(SRCS: .c = .o)
$(NAME) : $(OBJS)
@ar crs $(NAME) $ (OBJS)

all:$(NAME)

clean: 
@$(RM) $(OBJS)

 fclean: clean 
 @rm -f $(NAME)

 re: fclean all

.PHONY: all re clean fclean