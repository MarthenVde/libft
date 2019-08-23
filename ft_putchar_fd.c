/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:59:21 by marvan-d          #+#    #+#             */
/*   Updated: 2019/05/22 13:59:23 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(int c, int fd)
{
	unsigned char	buffer[4];

	if (c < 0x80)
		(void)write(fd, &c, 1);
	else if (c < 0x800)
	{
		buffer[0] = 0xc0 | (c >> 6);
		buffer[1] = 0x80 | (c >> 0 & 0x3f);
		write(fd, buffer, 2);
	}
	else if (c < 0x10000)
	{
		buffer[0] = 0xe0 | (c >> 12);
		buffer[1] = 0x80 | (c >> 6 & 0x3f);
		buffer[2] = 0x80 | (c >> 0 & 0x3f);
		write(fd, buffer, 3);
	}
	else
	{
		buffer[0] = 0xf0 | (c >> 18);
		buffer[1] = 0x80 | (c >> 12 & 0x3f);
		buffer[2] = 0x80 | (c >> 6 & 0x3f);
		buffer[3] = 0x80 | (c >> 0 & 0x3f);
		write(fd, buffer, 4);
	}
}
