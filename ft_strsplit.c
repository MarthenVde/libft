/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:11:25 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/30 14:11:26 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*find_str(const char *str, char c, int j)
{
	int len;
	int i;
	char *sub_str;

	len = 0;
	i = 0;
	while (str[j + len] != '\0' && str[j + len] != c)
		len++;
	sub_str = ft_strnew(len);
	while (i < len)
	{
		sub_str[i] = str[j + i];
		i++;
	}
	return (sub_str);
}

static int words_count(const char *str, char c)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != '\0')
			count++;
		while (*str != '\0' && *str != c)
			str++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	char **arr;
	int i;
	int j;

	if (!s || !(arr = (char **)malloc(sizeof(char *) * (words_count(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < words_count(s, c))
	{
		while (s[j] == c)
			j++;
		arr[i] = find_str(s, c, j);
		while (s[j] != '\0' && s[j] != c)
			j++;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}