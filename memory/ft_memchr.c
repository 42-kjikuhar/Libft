/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:30:44 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/01/21 10:49:15 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_memchr(void const *s, int c, size_t n)
{
	unsigned char const	*us;

	us = (unsigned char const *)s;
	while (n--)
	{
		if (*us == (unsigned char)c)
			return ((void *)(uintptr_t)us);
		us++;
	}
	return (NULL);
}
