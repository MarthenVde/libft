/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:30:06 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/29 14:30:07 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	num_len(int n)
{
	int len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char *ret;
	int l;
	int i;

	l = 0;
	i = 0;
	if (n < 0)
	{
		l = num_len((n *= - 1)) + 1;
		if (!(ret = ft_strnew(l)))
			return (NULL);
		ret[i] = '-';
		i++;
	}
	else
	{
		l = num_len(n);
		if (!(ret = ft_strnew(l)))
			return (NULL);
	}
	while (i <= l)
	{
		n /= 10;
		ret[i] = (n % 10) + '0';
		i++; 

	}
	return (ret);
}
