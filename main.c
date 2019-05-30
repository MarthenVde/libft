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
	char *s = "split  ||this|for|me|||||!|";
	int i = 0;
	char **result = ft_strsplit(s, '|');

	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
