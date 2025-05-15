/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:38:08 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 12:11:08 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copia um bloco de memoria de uma area para outra

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
// int	main()
// {
// 	char	src[] = "Hello World!";
// 	char	dest[150];
// 	size_t	n = sizeof(src);

// 	ft_memcpy(dest, src, n);
// 	printf("dest: %s\n", dest);
// 	return (0);
// }
