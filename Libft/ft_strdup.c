/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:48:13 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 12:38:10 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Duplica uma string
char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = ft_strlen(s) + 1;
	str = malloc(i);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, i);
	return (str);
}
// int	main(void)
// {
// 	char *d = ft_strdup("Batata");
// 	printf("Result is: %s\n", d);

// 	return (0);
// }
