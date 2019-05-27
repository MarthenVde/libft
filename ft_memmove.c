/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:32:52 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/27 11:32:53 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src && len != 0)
		return (NULL);
	size_t	i;
	unsigned char buffer[len + 5];
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	i = 0;
	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	while (i < len)
	{
		buffer[i] = src_ptr[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dst_ptr[i] = buffer[i];
		i++;
	}
	return (dst_ptr);
}
