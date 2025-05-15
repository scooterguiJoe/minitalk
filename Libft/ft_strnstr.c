/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:44:21 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 14:30:59 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Procura um substring dentro de uma string maior
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
	{
		return ((char *)big);
	}
	n = ft_strlen(little);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
		{
			return ((char *)big);
		}
		++big;
		--len;
	}
	return (NULL);
}
// int main(void)
// {
// 	char *d = ft_strnstr("O dia esta sol", "esta", 10);
// 	printf("Resultado: %s\n", d);

// 	return(0);
// }
