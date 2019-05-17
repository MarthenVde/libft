NAME = libft.a

FILES = ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_isdigit.c \
		ft_strdup.c	\
		ft_tolower.c \
		ft_isalpha.c \
		ft_isalnum.c

all:
	gcc -c -Wall -Werror -Wextra $(FILES)
	ar -rc $(NAME) *.o
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f libft.a
re: fclean all