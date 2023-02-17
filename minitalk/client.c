/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:10:45 by jtabilas          #+#    #+#             */
/*   Updated: 2023/02/17 12:25:14 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

void	ft_sendbyte(int pid, unsigned char byte)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (byte & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc != 3)
	{
		ft_printf("Try ./client <PID> <MESSAGGE> \n");
		return (0);
	}
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			ft_sendbyte(pid, argv[2][i]);
			i++;
		}
		ft_sendbyte(pid, '\n');
	}
	return (0);
}
