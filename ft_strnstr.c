/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:38:31 by pmorello          #+#    #+#             */
/*   Updated: 2024/02/17 19:29:43 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;
	size_t	comp;
	size_t	hlen;

	i = 0;
	nlen = 0;
	hlen = 0;
	while (needle[nlen] != '\0')
		nlen++;
	while (haystack[hlen] != '\0')
		hlen++;
	if (nlen == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len && (i + nlen) <= hlen)
	{
		comp = 0;
		while (comp < nlen && haystack[comp + i] == needle[comp])
			comp++;
		if (comp == nlen && comp + i <= len)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
