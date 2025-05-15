/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:36:46 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 12:33:19 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Procura a primeira ocurrencia de um caractere
char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if ((char)c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
// int main ()
// {
// 	const char *str = "Exercicio";

//     char *result = ft_strchr(str, 'r');
//     if (result)
//     {
//         printf("A letra %c esta na posicao: %ld\n", *result, result - str);
//     }
//     else
//     {
//         printf("not found\n");
//     }
// }
