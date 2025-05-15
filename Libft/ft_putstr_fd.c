/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:27:24 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 16:27:11 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}
// int main (void)
// {
// 	char *s  = "Tentativa\n";
// 	int fd = 1;
// 	ft_putstr_fd(NULL, fd);
// //	ft_putchar_fd('\n', fd);

// 	return (0);
// }