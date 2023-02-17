/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:46:31 by jtabilas          #+#    #+#             */
/*   Updated: 2023/02/06 12:46:32 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_size_nb(int nb, int base)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i = ft_size_nb(-nb, base) + 1;
	}
	while (nb > 0)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}

void	ft_print_nb(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = - (nb);
	}
	if (nb >= 10)
	{
		ft_print_nb(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	return ;
}

int	ft_utils_nb(int nb)
{
	if (nb == -2147483648)
	{
		ft_print_nb(nb);
		return (11);
	}
	ft_print_nb(nb);
	return (ft_size_nb(nb, 10));
}
