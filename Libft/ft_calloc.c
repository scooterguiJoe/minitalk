/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:26:03 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 11:43:18 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Aloca memoria dinamicamente para um numero especifico de memoria
void	*ft_calloc(size_t num, size_t size)
{
	void	*i;

	if (num == 0 || size == 0)
		i = malloc(0);
	else if ((num * size) / num != size)
		return (NULL);
	else
		i = malloc(num * size);
	if (!i)
		return (NULL);
	if (num != 0 || size != 0)
		ft_bzero(i, num * size);
	return (i);
}
// int main (void)
// {
// 		int  *pointer = ft_calloc(5, sizeof(int));
// 		 printf("pointer: %p \n", pointer);
// 		free(pointer);
// 		return 0;
// }
