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

int		main(void)
{
	char str[40] = "hello world";
	char *sub = ft_strsub(str, 6, 5);
	printf("%s\n", sub);
	return (0);
}
