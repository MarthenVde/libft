/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:04:14 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/28 11:04:16 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int s1_len;
	unsigned int s2_len;

	s1_len = ft_strlen(s1);
	s2_len = 0;
	while (s2[s2_len] != '\0')
	{
		s1[s1_len + s2_len] = s2[s2_len];
		s2_len++;
	}
	s1[s1_len + s2_len] = '\0';
	return (s1);
}
