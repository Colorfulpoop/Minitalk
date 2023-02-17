/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:38:11 by jtabilas          #+#    #+#             */
/*   Updated: 2023/02/06 11:38:15 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(unsigned char c);
int		ft_pustr(const char *s);
int		ft_size_pointer(unsigned long long ptr);
void	ft_print_pointer(unsigned long long ptr);
int		ft_utils_pointer(unsigned long long ptr);
int		ft_size_nb(int nb, int base);
void	ft_print_nb(int nb);
int		ft_utils_nb(int nb);
int		ft_size_unb(unsigned int nb, int base);
void	ft_printnb_uint(unsigned int nb);
int		ft_utils_udecimal(unsigned int nb);
int		ft_hexlenght(unsigned int nb);
void	ft_printedhex(unsigned int nb, const char type);
int		ft_printhex(int nb, const char type);
int		ft_printf(const char*element, ...);
#endif
