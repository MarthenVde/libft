/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:36:34 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/23 11:36:35 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (new_dst);
}
