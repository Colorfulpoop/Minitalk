/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:24:56 by jtabilas          #+#    #+#             */
/*   Updated: 2023/02/15 09:24:57 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void	ft_connect(int signal)
{
	static int	bit;
	static int	i;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		printf("%c", i);
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
		printf("Error!");
	}
	pid = getpid();
	printf("-> %d \n", pid);
	printf("Waiting for a messagge... \n");
	while (argc == 1)
	{
		signal(SIGUSR1, ft_connect);
		signal(SIGUSR2, ft_connect);
		pause ();
	}
	return (0);
}
