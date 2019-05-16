/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 12:08:43 by event             #+#    #+#             */
/*   Updated: 2019/05/16 18:45:05 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char *ft_strdup(const char *str)
{
	char *dup;
	int count;

	dup = (char *)malloc(sizeof(dup) * ft_strlen(str) + 1);

	if (dup == NULL)
		return (NULL);

	count = 0;
	while (str[count] != '\0')
	{
		dup[count] = str[count];
		count++;
	}
	dup[count] = '\0';

	return (dup);
}
