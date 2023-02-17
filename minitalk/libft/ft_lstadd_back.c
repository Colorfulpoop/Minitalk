/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtabilas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:26:29 by jtabilas          #+#    #+#             */
/*   Updated: 2023/01/27 16:26:32 by jtabilas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curr;

	if (!lst)
		return ;
	if (*lst)
	{
		curr = ft_lstlast(*lst);
		curr->next = new;
	}
	else
		*lst = new;
}
