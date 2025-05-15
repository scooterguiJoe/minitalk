/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:30:37 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/22 16:25:05 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	digit_count(int number)
{
	unsigned int	len;

	len = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		len += 1;
	while (number != 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	unsigned int	len;
	char			*result;

	len = digit_count(n);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		result[0] = '0';
	result[len] = '\0';
	while (num != 0)
	{
		result[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (result);
}

// int main(void)
// {
// 	int numb = 123;
//     char	*d = ft_itoa(numb);
// 	printf("Result is: %s\n", d);
// 	return (0);
// }
