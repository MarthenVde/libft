/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:45:24 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/22 10:45:25 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*ret;
	unsigned int	i;

	i = 0;
	ret = (char *)malloc(sizeof(s) * ft_strlen(s) + 1);
	if (!ret)
		return (NULL);
	while (s[i] != '\0')
	{
		ret[i] = f(s[i]);
		i++;
	}
	return (ret);
}
