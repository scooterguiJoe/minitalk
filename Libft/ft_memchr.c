/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:41:35 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 11:58:36 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Busca um determinado caractere em uma area de memoria e retorna
// um ponteiro para a primeira ocorrencia desse caractere

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(str + i) == (unsigned char)c)
		{
			return ((void *)str + i);
		}
		i++;
	}
	return (NULL);
}
// int	main()
// {
// 	const	char	str[] = "Hello, world!";
// 	int	c = 'o';
// 	size_t	len = ft_strlen(str);
// 	void	*result;

// 	result = ft_memchr(str, c, len);

// 	if (result != NULL)
// 	{
// 		printf("Caractere '%c' encontrado em '%s' na posição: %ld\n", 
// 		c, str, (char *)result - str);
// 	}
// 	else
// 	{
// 		printf("Caractere '%c' não encontrado em '%s'\n", c, str);
// 	}
// 	return (0);
// }
