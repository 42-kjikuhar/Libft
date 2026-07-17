/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:16:23 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/01/21 10:50:45 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

/* search by decrement loop */
void	*ft_memrchr(const void *s, int c, size_t n)
{
	const unsigned char	*us;

	us = (const unsigned char *)s;
	while (n--)
		if (us[n] == (unsigned char)c)
			return ((void *)(uintptr_t)(us + n));
	return (NULL);
}
