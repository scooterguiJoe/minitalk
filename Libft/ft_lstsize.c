/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:10:37 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 15:35:27 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
// int main()
// {
// 	t_list *node1 = malloc(sizeof(t_list));

// 	node1->content = (void *)2;
// 	node1->next = NULL;

// 	int size = ft_lstsize(node1);
// 	printf("Tamanho da lista: %d\n", 2);

// 	free(node1);
// 	return (0);
// }