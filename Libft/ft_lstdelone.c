/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:21:46 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 15:07:27 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Liberar memoria de um unico NO da linked list
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// void	del(void *data)
// {
// 	free(data);
// }
// int main()
// {
// 	int	*data = malloc(sizeof(int));
// 	*data = 42;

// 	t_list *node = malloc(sizeof(t_list));
// 	node->content = data;
// 	node->next = NULL;

// 	ft_lstdelone(node, del);

// 	node = NULL;

// 	if (node == NULL)
// 		printf("Node deletado com sucesso!\n");
// 	else
// 		printf("Falha ao deletar o node.\n");
// 	return (0);
// }
