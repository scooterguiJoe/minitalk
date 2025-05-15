/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:33:15 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/20 15:55:33 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (!lst)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
// int main()
// {
//     t_list *node1;
//     t_list *node2;
//     t_list *last_node;
// 	node1 = ft_lstnew((void *)10);
//     node2 = ft_lstnew((void *)15);

//     node1->next = node2;

//     last_node = ft_lstlast(node1);
//     if (last_node)
//     {
//         printf("O conteúdo do último nó é: %d\n", 
//			(int)(long)last_node->content);
//     }

//     free(node1);
//     free(node2);

//     return 0;
// }
