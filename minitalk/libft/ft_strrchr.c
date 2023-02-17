/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:23:30 by jtabilas          #+#    #+#             */
/*   Updated: 2023/01/24 14:22:26 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	k;

	k = ft_strlen(s);
	while (k >= 0)
	{
		if (s[k] == (char)c)
			return ((char *)s + k);
		k--;
	}
	return (NULL);
}
