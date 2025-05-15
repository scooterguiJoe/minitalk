/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:47:16 by guvascon          #+#    #+#             */
/*   Updated: 2025/01/08 13:04:32 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//concatenar duas strings

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			j;
	char		*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)+ 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
// int main(void)
// {
// 	char *d;
// 	d = ft_strjoin("fe", "lizes");
// 	printf("Result is: %s\n", d);
// 	return (0);
// }
