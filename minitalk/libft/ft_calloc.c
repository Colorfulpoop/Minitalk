/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:32:56 by jtabilas          #+#    #+#             */
/*   Updated: 2023/02/17 11:38:36 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*str;

	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	i = 0;
	ft_bzero(str, size * nmemb);
	return (str);
}
