/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 20:33:08 by shovsepy          #+#    #+#             */
/*   Updated: 2021/02/02 20:03:04 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst->next)
	{
		lst = lst->next;
		if (lst->next == NULL)
			return (lst);
	}
	return (lst);
}
