/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:01:20 by guvascon          #+#    #+#             */
/*   Updated: 2025/04/04 18:04:08 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(long nbr, char *base)
{
	int		count;
	char	mod;

	count = 0;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr = -nbr;
		count++;
	}
	if (nbr >= ft_strlen(base))
	{
		count += ft_putnbr_base(nbr / ft_strlen(base), base);
	}
	mod = base[nbr % ft_strlen(base)];
	write (1, &mod, 1);
	count++;
	return (count);
}
