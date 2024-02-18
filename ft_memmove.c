/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:55:12 by pmorello          #+#    #+#             */
/*   Updated: 2024/02/17 12:49:55 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
	{
		return (NULL);
	}
	i = -1;
	if (dst > src)
	{
		while (len-- > 0)
		{
			((char *)dst)[len] = ((char *)src)[len];
		}
	}
	else
	{
		while (++i < len)
		{
			((char *)dst)[i] = ((char *) src)[i];
		}
	}
	return (dst);
}
