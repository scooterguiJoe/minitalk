/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:51:12 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 12:06:57 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Compara duas areas de memoria byte a byte 
//e retorna um valor inteiro

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = str1;
	s2 = str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
// int main ()
// {
// 	printf("%d\n", ft_memcmp("wOrld" , "world", 2));
// 	return (0);
// }
