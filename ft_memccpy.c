/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:54:31 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/23 12:54:32 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*new_dst;
	char	*new_src;

	i = 0;
	new_dst = (char *)dst;
	new_src = (char *)src;
	while (i < n)
	{
		new_dst[i] = new_src[i];
		if (new_src[i] == c)
			return (&new_dst[++i]);
		i++;

	}
	return (NULL);
}
