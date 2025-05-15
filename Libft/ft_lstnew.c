/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:25:14 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 15:29:32 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//cria e inicializa um novo no
t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem -> content = content;
	elem -> next = NULL;
	return (elem);
}
// int main()
// {
// 	t_list *elem = ft_lstnew("Hello");
// 	printf("%s\n", (char*) elem -> content);
// 	return 0;
// }
