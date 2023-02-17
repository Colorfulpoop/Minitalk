/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:37:58 by jtabilas          #+#    #+#             */
/*   Updated: 2023/02/06 11:37:59 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar(unsigned char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_pustr(const char *str)
{
	int	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_printable(va_list lista, const char type)
{
	int	is_print;

	is_print = 0;
	if (type == 'c')
		is_print = ft_putchar(va_arg(lista, int));
	else if (type == 's')
		is_print = ft_pustr(va_arg(lista, char *));
	else if (type == 'p')
		is_print = ft_utils_pointer(va_arg(lista, unsigned long long));
	else if (type == 'd')
		is_print = ft_utils_nb(va_arg(lista, int));
	else if (type == 'i')
		is_print = ft_utils_nb(va_arg(lista, int));
	else if (type == 'u')
		is_print = ft_utils_udecimal(va_arg(lista, unsigned int));
	else if (type == 'x' || type == 'X')
		is_print = ft_printhex(va_arg(lista, int), type);
	else if (type == '%')
		is_print = ft_putchar('%');
	else
	{
		is_print = is_print + ft_putchar('%');
		is_print = is_print + ft_putchar(type);
	}
	return (is_print);
}

int	ft_printf(const char *element, ...)
{
	int		i;
	int		printed;
	va_list	param_list;

	i = 0;
	printed = 0;
	va_start(param_list, element);
	while (element[i])
	{
		if (element[i] == '%')
		{
			printed = printed + ft_printable(param_list, element[i + 1]);
			i++;
		}
		else
			printed = printed + ft_putchar(element[i]);
		i++;
	}
	return (printed);
}
