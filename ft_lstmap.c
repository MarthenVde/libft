/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:06:34 by marvan-d          #+#    #+#             */
/*   Updated: 2019/06/05 12:06:39 by marvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *lst2;
	t_list *curr;

	if (!(curr = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	curr = lst;
	while (curr)
	{
		ft_lstadd(&lst2, f(lst));
		curr = curr->next;
	}
	return (lst2);
}
