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

SRCS		=	ft_isalnum.c  ft_isprint.c  ft_memmove.c  ft_strlcat.c  ft_strnstr.c \
			ft_atoi.c    ft_isalpha.c  ft_memchr.c	 ft_memset.c   ft_strlcpy.c  ft_strrchr.c \
			ft_bzero.c   ft_isascii.c  ft_memcmp.c	 ft_strchr.c   ft_strlen.c   ft_tolower.c \
			ft_calloc.c  ft_isdigit.c  ft_memcpy.c	 ft_strdup.c   ft_strncmp.c  ft_toupper.c \
			ft_substr.c  ft_strjoin.c  ft_strtrim.c  ft_split.c  ft_itoa.c  ft_strmapi.c \
			ft_striteri.c  ft_putchar_fd.c  ft_putstr_fd.c  ft_putnbr_fd.c  ft_putendl_fd.c

CC			= gcc
RM			= rm -f
INCLUDE 	= libft.h

CFLAGS 		= -Wall -Wextra -Werror -I.

OBJS 		= $(SRCS:.c=.o)

NAME 		= libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean