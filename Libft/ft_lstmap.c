/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:25:37 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/04 18:01:45 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*obj;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		obj = ft_lstnew(f(lst -> content));
		if (!obj)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, obj);
		lst = lst->next;
	}
	return (list);
}
