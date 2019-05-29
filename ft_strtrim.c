/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:34:48 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/29 13:34:49 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int 	cur;
	char	*ts;

	if (s)
	{
		start = 0;
		end = ft_strlen(s);
		cur = 0;
		while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n' || s[start] == ',')
			start++;
		while (s[end] == ' ' || s[end] == '\t' || s[end] == '\n' || s[start] == ',')
			end--;
		if (!(ts = ft_strnew(end  - start + 1)))
			return (NULL);
		while ((cur + start) < end)
		{
			ts[cur] = s[cur + start];
			cur++;
		}
		return (ts);
	}
	return (NULL);
}
