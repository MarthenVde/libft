/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:24:00 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/21 14:24:02 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_str;
	size_t	i;

	new_str = (char *)malloc(size * sizeof(new_str) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		new_str[i++] = '\0';
	new_str[i] = '\0';
	return (new_str);
}
