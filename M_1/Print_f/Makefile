# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2024-05-24 15:19:54 by mborovka          #+#    #+#             #
#   Updated: 2024-05-24 15:19:54 by mborovka         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME 	= libftprintf.a
SRCS		=	ft_hexaddress.c  ft_printf.c  ft_putchar.c  ft_puthex.c  ft_putnbr.c \
				ft_putstr.c  ft_u_putnbr.c

OBJECTS = $(SRCS:.c=.o)

MAKE = make

LIB_PATH = ./libft

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

all: subsystem $(NAME)

subsystem:
	$(MAKE) -C $(LIB_PATH)

bonus: all

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS) $(LIB_PATH)/*.o

clean:
	$(MAKE) -C $(LIB_PATH) clean
	rm -f $(OBJECTS)

fclean: clean
	$(MAKE) -C $(LIB_PATH) fclean
	rm -f $(NAME)

re: fclean all