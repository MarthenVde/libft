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
#include <time.h>

int		main(void)
{
	srand(clock());
	int n;
	char *d;

	for (int i = 2000; i >= 0; i--)
	{
		n = rand();
		n *= -1;
		d = ft_itoa(n);
		if (atoi(d) != n)
		{
			printf("failed input: %i   output:  %s\n",n , d);
		}
		else
		{
			printf("success input: %i   output:   %s\n",n , d);
		}
	}
}
