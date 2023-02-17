/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:43:45 by jtabilas          #+#    #+#             */
/*   Updated: 2023/01/24 14:18:04 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			k;
	unsigned char	*s1cpy;
	unsigned char	*s2cpy;

	s1cpy = (unsigned char *)s1;
	s2cpy = (unsigned char *)s2;
	k = 0;
	if (n == 0)
		return (0);
	while (k < n)
	{
		if (s1cpy[k] != s2cpy[k])
			return (s1cpy[k] - s2cpy[k]);
		else
			k++;
	}
	return (0);
}
