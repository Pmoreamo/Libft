/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:10:40 by pmorello          #+#    #+#             */
/*   Updated: 2024/04/23 13:00:17 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	next = NULL;
	while (current != NULL)
	{
		next = current -> next;
		if (del)
			del(current->content);
		free (current);
		current = next;
	}
	*lst = NULL;
}
