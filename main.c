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

void	func(unsigned int i, char *str)
{
	str[i] = 'f';
}

int	main(void)
{
	char str[] = "hello";
	void	(*f)(unsigned int, char *);
	f = &func;
	ft_striteri(str, f);
	printf("%s\n", str);
	return (0);
}
