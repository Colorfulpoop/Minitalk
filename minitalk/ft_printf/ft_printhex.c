/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:01:36 by jtabilas          #+#    #+#             */
/*   Updated: 2023/02/06 15:01:44 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_hexlenght(unsigned int nb)
{
	int	lenght;

	lenght = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		lenght++;
		nb = nb / 16;
	}
	return (lenght);
}

void	ft_printedhex(unsigned int nb, const char type)
{
	if (nb >= 16)
	{
		ft_printedhex(nb / 16, type);
		ft_printedhex(nb % 16, type);
	}
	else
	{
		if (nb <= 9)
		{
			ft_putchar(nb + '0');
		}
		else
		{
			if (type == 'x')
				ft_putchar(nb - 10 + 'a');
			else if (type == 'X')
				ft_putchar(nb - 10 + 'A');
		}
	}
	return ;
}

int	ft_printhex(int nb, const char type)
{
	ft_printedhex(nb, type);
	return (ft_hexlenght(nb));
}
