/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:50:23 by guvascon          #+#    #+#             */
/*   Updated: 2025/05/12 17:00:53 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	ft_iterative_power(int base, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= base;
		power--;
	}
	return (result);
}

static char	*lettertostring(char const *str, char const letter)
{
	int		i;
	int		j;
	char	*message;

	i = 0;
	j = 0;
	message = malloc((ft_strlen(str) + 2) * sizeof(char));
	if (!message)
		return (NULL);
	while (str[i])
		message[j++] = str[i++];
	i = 0;
	message[j++] = letter;
	message[j] = '\0';
	free((void *)(str));
	return (message);
}

static void	process_string(char **str, int value)
{
	*str = lettertostring(*str, value);
	if (value == '\0')
	{
		if (ft_strncmp(*str, "exit\0", 5) == 0)
		{
			ft_printf("Exiting...\n");
			free(*str);
			exit(0);
		}
		ft_printf("%s\n", *str);
		free(*str);
		*str = NULL;
	}
}

static void	signal_handler(int signum)
{
	static int	count_bits = 0;
	static int	value = 0;
	static char	*string;

	if (!string)
		string = ft_strdup("");
	if (signum == SIGUSR1)
		value += 0;
	else if (signum == SIGUSR2)
		value += ft_iterative_power(2, 7 - count_bits);
	count_bits++;
	if (count_bits == 8)
	{
		process_string(&string, value);
		count_bits = 0;
		value = 0;
	}
}

int	main(void)
{
	ft_printf("Server's PID: %d\n", getpid());
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	while (1)
		pause();
	return (0);
}
