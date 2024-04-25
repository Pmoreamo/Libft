/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:00:04 by pmorello          #+#    #+#             */
/*   Updated: 2024/04/25 09:49:23 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return (NULL);
	if (!*lst)
	{
		*lst = new;
		return (new);
	}
	current = *lst;
	while (current->next != NULL)
	{
		current = lst->next;
	}
	current->next = new;
}
