/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:02:40 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/28 14:02:41 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dslen;
	size_t srlen;

	dslen = (size_t)ft_strlen(dst);
	srlen = 0;
	while (src[srlen] != '\0' && (srlen + dslen + 1) < dstsize)
	{
		dst[dslen + srlen] = src[srlen];
		srlen++;
	}
	dst[dslen + srlen] = '\0';
	return (dslen + srlen);
}
