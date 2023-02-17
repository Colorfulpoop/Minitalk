/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:32:00 by jtabilas          #+#    #+#             */
/*   Updated: 2023/01/29 14:32:02 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

bool	is_in_string(char c, char const *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] && is_in_string(s1[j], set))
		j++;
	k = ft_strlen((char *)s1);
	while (k > j && is_in_string(s1[k - 1], set))
		k--;
	str = (char *) malloc(sizeof(*s1) * (k - j + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (j < k)
		str[i++] = s1[j++];
	str[i] = 0;
	return ((char *)str);
}
