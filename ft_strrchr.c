/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:44:48 by pmorello          #+#    #+#             */
/*   Updated: 2024/02/17 17:45:31 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	if ((char)c == '\0')
	{
		return (&((char *)s)[i]);
	}
	while (--i > -1)
	{
		if (s[i] == (char)c)
		{
			return (&((char *)s)[i]);
		}
	}
	return (0);
}
