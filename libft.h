#ifndef LIBFT_H
	#define LIBFT_H

#include <string.h>
#include <stdlib.h>

int		ft_strlen(const char* str);
char	*ft_strdup(const char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
#endif
