/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:24:53 by pmorello          #+#    #+#             */
/*   Updated: 2024/04/23 14:02:32 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del || lst)
		return (NULL);
	first = NULL;
	new = ft_lstnew((*f)(lst->content));
	while (lst)
	{
		if (!new)
		{
			while (first)
			{
				new = first-> next;
				(*del)(first-> content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst-> next;
	}
	return (first);
}
