/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:10:41 by guvascon          #+#    #+#             */
/*   Updated: 2025/03/03 16:31:47 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_pointer(unsigned long int n, char *base, int flag)
{
	int	count;
	int	rmd;

	count = 0;
	if (n == 0)
		return (write(1, "(nil)", 5));
	if (flag != 1)
		count += ft_putstr("0x");
	if (n >= 16)
		count += ft_print_pointer(n / 16, base, 1);
	rmd = (n % 16);
	write(1, &base[rmd], 1);
	count++;
	return (count);
}
// int main()
// {
// 	ft_print_pointer(42, "0123456789abcdef", 0);
// }