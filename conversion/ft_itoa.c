/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:55:06 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/07/17 21:01:20 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convert the integer 'n'to a ASCII string */
static size_t	number_len_(int number)
{
	unsigned int	nb;
	size_t			number_len;

	number_len = 1;
	if (number < 0)
	{
		nb = -(unsigned int)number;
		number_len++;
	}
	else
		nb = (unsigned int)number;
	while (nb >= 10)
	{
		nb /= 10;
		number_len++;
	}
	return (number_len);
}

char	*ft_itoa(int n)
{
	char			*dest_str;
	unsigned int	nb;
	size_t			i;

	i = number_len_(n);
	dest_str = malloc(sizeof(char) * (i + 1));
	if (!dest_str)
		return (NULL);
	dest_str[i] = '\0';
	if (n < 0)
	{
		dest_str[0] = '-';
		nb = -(unsigned int)n;
	}
	else
		nb = (unsigned int)n;
	while (nb >= 10)
	{
		i--;
		dest_str[i] = (char)(nb % 10 + '0');
		nb /= 10;
	}
	dest_str[i - 1] = (char)(nb + '0');
	return (dest_str);
}
