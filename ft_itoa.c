/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmorello <pmorello@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:15:30 by pmorello          #+#    #+#             */
/*   Updated: 2024/02/11 13:31:41 by pmorello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*is_negative(int n)
{
	char	*num;
	int		decenas;
	int		aux;
	int		index;

	aux = n;
	decenas = 0;
	while (aux < -9)
	{
		decenas++;
		aux = aux / 10;
	}
	index = decenas + 1;
	num = (char *)malloc(sizeof(char) * (decenas + 3));
	if (num == NULL)
		return (NULL);
	num[index + 1] = '\0';
	num[0] = '-';
	while (n < -9)
	{
		num[index--] = (n % 10 * -1) + '0';
		n = n / 10;
	}
	num[index] = ((n % 10) * -1) + '0';
	return (num);
}

char	*is_positive(int n)
{
	char	*num;
	int		decenas;
	int		aux;
	int		mod;

	aux = n;
	decenas = 0;
	while (aux > 9)
	{
		decenas++;
		aux = aux / 10;
	}
	num = (char *)malloc(sizeof(char) * (decenas + 2));
	if (num == NULL)
		return (NULL);
	num[decenas + 1] = '\0';
	while (n > 9)
	{
		mod = n % 10;
		num[decenas--] = mod + '0';
		n = n / 10;
	}
	num[decenas] = (n % 10) + '0';
	return (num);
}

char	*ft_itoa(int n)
{
	if (n < 0)
		return (is_negative(n));
	else
		return (is_positive(n));
}
