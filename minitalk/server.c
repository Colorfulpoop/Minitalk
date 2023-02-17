/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:10:55 by jtabilas          #+#    #+#             */
/*   Updated: 2023/02/17 12:10:56 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

void	ft_receive_byte(int signal)
{
	static int	bit;
	static int	i;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf ("Error! Try ./server \n");
		return (0);
	}
	pid = getpid();
	ft_printf("PID --> %d \n", pid);
	ft_printf("Waiting for a messagge.... \n");
	while (argc == 1)
	{
		signal(SIGUSR1, ft_receive_byte);
		signal(SIGUSR2, ft_receive_byte);
		pause();
	}
	return (0);
}
