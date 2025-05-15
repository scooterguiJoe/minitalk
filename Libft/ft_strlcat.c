/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:08:40 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 13:01:35 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//concatena a string src ao final da string dest
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dest[d] && d < size)
	{
		d++;
	}
	while (src[s] && (d + s + 1) < size)
	{
		dest[d + s] = src[s];
		s++;
	}
	if (d < size)
	{
		dest [d + s] = '\0';
	}
	return (d + ft_strlen(src));
}
// int main() 
// {
//     char dest[20] = "Hello";
//     char src[] = " World";
//     size_t size = 20;  
// 	size_t result = ft_strlcat(dest, src, size);
// 	printf("Resultado: '%s'\n", dest);
// }