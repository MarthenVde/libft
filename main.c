/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:29:21 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/21 12:29:45 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

char	func(unsigned int i, char c)
{
	c = 'f';
	return (c);
}

int		main(void)
{
	char (*f)(unsigned int, char);
	f = &func;
	char *s1 = "hello";
	char *s2 = ft_strmapi(s1, f);
	ft_putstr(s2);
	printf("\n");
	return (0);
}
