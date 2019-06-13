/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:06:49 by marvan-d          #+#    #+#             */
/*   Updated: 2019/06/05 12:06:52 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		if (!(node->content = (void *)malloc(sizeof(*content) * content_size)))
			return (NULL);
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}
/*
**int	main()
**{
**	char *data;
**
**	data = ft_strdup("hello\n");
**	t_list *test_node;
**	if (!(test_node = ft_lstnew(data,7)))
**		ft_putstr("Could not create list\n");
**	else
**	{
**		ft_putstr((char*)test_node->content);
**		ft_putnbr((int)test_node->content_size);
**		ft_putchar('\n');
**		if (test_node->next == NULL)
**			ft_putstr("next = NULL\n");
**		else
**			ft_putstr("Error");
**	}
**	return (0);
**}
*/
