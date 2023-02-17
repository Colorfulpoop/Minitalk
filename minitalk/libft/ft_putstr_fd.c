/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:14:33 by jtabilas          #+#    #+#             */
/*   Updated: 2023/01/26 14:14:35 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (!s)
		return ;
	while (s[count] != '\0')
	{
		write(fd, &s[count], 1);
		count++;
	}
	return ;
}
