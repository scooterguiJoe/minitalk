/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:57:20 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 13:22:12 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// char uppercase(unsigned int index, char c)
// {
//     if (index % 2 == 0)
//         return c - 32; 
//     return c; 
// }
// int main()
// {
//     char *str = "hello";
//     char *result = ft_strmapi(str, uppercase);
// 	printf("Result: %s\n", result);
// 	free(result);
// 	return 0;
// }duvida
