/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 20:33:44 by shovsepy          #+#    #+#             */
/*   Updated: 2021/01/28 20:33:46 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*c;
	t_list	*start;

	if (!(start = ft_lstnew(f(lst->content))))
		ft_lstdelone(lst, del);
	else
	{
		lst = lst->next;
		c = start;
	}
	while (lst)
	{
		if (!(c->next = ft_lstnew(f(lst->content))))
			ft_lstdelone(lst, del);
		lst = lst->next;
		c = c->next;
	}
	return (start);
}
