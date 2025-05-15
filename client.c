/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:50:19 by guvascon          #+#    #+#             */
/*   Updated: 2025/05/12 17:03:54 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	invalid_id(int pid)
{
	ft_printf("[ERROR]: invalid server id. %d\n", pid);
	exit(EXIT_FAILURE);
}

static void	send_signals(int pid, char *message)
{
	int	letter;
	int	i;

	letter = 0;
	while (message[letter])
	{
		i = -1;
		while (++i < 8)
		{
			if (((unsigned char)(message[letter] >> (7 - i)) & 1) == 0)
				kill(pid, SIGUSR1);
			else if (((unsigned char)(message[letter] >> (7 - i)) & 1) == 1)
				kill(pid, SIGUSR2);
			usleep(50);
		}
		letter++;
	}
	i = 0;
	while (i++ < 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			invalid_id(pid);
		usleep(50);
	}
}

static void	handler(int ac)
{
	if (ac == 1)
	{
		ft_printf("Use the format ./client PID ""Message\n");
	}
	else
	{
		ft_printf("[ERROR]\n");
	}
}

int	main(int ac, char **av)
{
	char	*message;
	int		server_id;

	if (ac == 1 || ac != 3)
	{
		handler(ac);
		return (0);
	}
	server_id = ft_atoi(av[1]);
	if (server_id <= 0)
	{
		ft_printf("[ERROR]: invalid server id\n");
		return (0);
	}
	message = av[2];
	if (message[0] == 0)
	{
		printf("Empty text\n");
		return (0);
	}
	send_signals(server_id, message);
	return (0);
}
