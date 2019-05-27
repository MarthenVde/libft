# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 12:00:36 by marvan-d          #+#    #+#              #
#    Updated: 2019/05/21 12:00:40 by marvan-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

FILES = ft_bzero.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_isdigit.c \
		ft_strdup.c	\
		ft_tolower.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_atoi.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_strstr.c  \
		ft_strnstr.c \
		ft_memset.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_putnbr.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putendl.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strcpy.c


all: a.out $(NAME)

$(NAME): $(FILES)
	gcc -c -Wall -Werror -Wextra $(FILES)
	ar -rc $(NAME) *.o
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f libft.a
re: fclean all

a.out: main.c libft.a
	gcc main.c libft.a