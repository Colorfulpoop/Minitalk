/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:43:28 by jtabilas          #+#    #+#             */
/*   Updated: 2023/01/30 13:43:30 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_check(char const *s, char c)
{
	int	count;
	int	i;
	int	trovato;

	count = 0;
	i = 0;
	trovato = 0;
	while (s[count] != 0)
	{
		if (s[count] != c && trovato == 0)
		{
			i++;
			trovato = 1;
		}
		else if (s[count] == c)
			trovato = 0;
		count++;
	}
	return (i);
}

static char	*ft_stfr(char *s, int inizio, int fine)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = malloc(sizeof(char) * (fine - inizio + 1));
	while (inizio < fine)
	{
		newstr[i] = s[inizio];
		inizio++;
		i++;
	}
	newstr[i] = 0;
	return (newstr);
}

static char	**ft_dosplit(char **strs, char c, char const *s)
{
	int	k;
	int	j;
	int	inizio;
	int	fine;

	k = 0;
	j = 0;
	while (s[j] != 0)
	{
		if (s[j] != c)
		{
			inizio = j;
			while (s[j] != c && s[j])
				j++;
			fine = j;
			strs[k++] = ft_stfr((char *)s, inizio, fine);
		}
		else if (s[j] == c)
			j++;
	}
	strs[k] = 0;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (0);
	strs = malloc (sizeof(char *) * (ft_check(s, c) + 1));
	if (!strs)
		return (0);
	strs = ft_dosplit(strs, c, s);
	return (strs);
}
