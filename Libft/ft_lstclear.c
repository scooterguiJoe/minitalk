/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:47:56 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 11:23:17 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	free (*lst);
	*lst = NULL;
}
// void	del(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	t_list *node1 = malloc(sizeof(t_list));
// 	node1->content = malloc(sizeof(int));
// 	*(int *)(node1->content) = 1;
// 	node1->next = NULL;

// 	t_list *node2 = malloc(sizeof(t_list));
// 	node2->content = malloc(sizeof(int));
// 	*(int *)(node2->content) = 2;
// 	node2->next = NULL;

// 	t_list *head = node1;
// 	node1->next = node2;
// 	ft_lstclear(&head, &del);
// 	if (head == NULL)
// 		printf("Lista limpa com sucesso!\n");
// 	else
// 		printf("Erro ao limpar a lista!\n");
// 	return (0);
// }
