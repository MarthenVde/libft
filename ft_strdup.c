/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 12:08:43 by event             #+#    #+#             */
/*   Updated: 2019/05/14 13:55:06 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strdup(const char *str)
{
	char *dup;
	int size;
	int count;

	count = 0;
	size = ft_strlen(str);

	dup = (char *)malloc(sizeof(dup) * ft_strlen(str) + 1);

	if (dup == NULL)
		return (NULL);

	while (str[count] != '\0')
	{
		dup[count] = str[count];
		count++;
	}
	dup[count] = '\0';

	return (dup);
}
