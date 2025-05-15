/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:28:27 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 12:42:00 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//passa cada carachetere para o proximo 

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
// void	ft_increment(unsigned int d, char * ch)
// {
// 	(*ch)++;
// }
// int main(void)
// {
// 	char	str[] = "vans";
// 	ft_striteri(str, ft_increment);
// 	printf("Result is: %s\n", str);
// }
