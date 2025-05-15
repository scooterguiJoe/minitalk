/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:02:27 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 11:24:47 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
// void print(void *data)
// {
// 	int *ptr = (int *)data;
// 	printf("%d\n", *ptr);
// }
// int main()
// {
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	int num1 = 10, num2 = 20, num3 = 30;

// 	node1->content = &num1;
// 	node1->next = node2;

// 	node2->content = &num2;
// 	node2->next = node3;

// 	node3->content = &num3;
// 	node3->next = NULL;

// 	ft_lstiter(node1, &print);

// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }
