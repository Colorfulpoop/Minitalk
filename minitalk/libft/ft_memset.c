/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:49:46 by jtabilas          #+#    #+#             */
/*   Updated: 2023/01/24 14:20:31 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*dest;

	dest = NULL;
	dest = (unsigned char *) str;
	while (len--)
	{
		dest[len] = (unsigned char) c;
	}
	return ((void *) str);
}
