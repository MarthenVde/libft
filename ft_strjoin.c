/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:34:17 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/29 11:34:19 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len1;
	unsigned int	len2;
	char			*ret;
	unsigned int	i;

	
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2 || !(ret = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	i = 0;
	while (i < len1)
	{
		ret[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		ret[i + len1 - 1] = s1[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
