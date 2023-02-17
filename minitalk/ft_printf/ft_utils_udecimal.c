/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:49:23 by jtabilas          #+#    #+#             */
/*   Updated: 2023/02/06 14:49:26 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_size_unb(unsigned int nb, int base)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i = ft_size_unb(-nb, base) + 1;
	}
	while (nb > 0)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}

void	ft_printnb_uint(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_printnb_uint(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	return ;
}

int	ft_utils_udecimal(unsigned int nb)
{
	ft_printnb_uint(nb);
	return (ft_size_unb(nb, 10));
}
