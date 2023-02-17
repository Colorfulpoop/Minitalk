/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:23:31 by jtabilas          #+#    #+#             */
/*   Updated: 2023/02/06 12:23:37 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_size_pointer(unsigned long long ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
		return (1);
	while (ptr != 0)
	{
		ptr = ptr / 16;
		i++;
	}
	return (i + 2);
}

void	ft_print_pointer(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_print_pointer(ptr / 16);
		ft_print_pointer(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar(ptr + '0');
		else
			ft_putchar(ptr - 10 + 'a');
	}
	return ;
}

int	ft_utils_pointer(unsigned long long ptr)
{
	write(1, "0x", 2);
	if (ptr == 0)
		return (write(1, "0", 1) + 2);
	ft_print_pointer(ptr);
	return (ft_size_pointer(ptr));
}
