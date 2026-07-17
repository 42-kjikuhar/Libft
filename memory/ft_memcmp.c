/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:41:27 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/01/21 10:50:01 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char const	*s1_str;
	unsigned char const	*s2_str;

	s1_str = (unsigned char const *)s1;
	s2_str = (unsigned char const *)s2;
	while (n--)
	{
		if (*s1_str != *s2_str)
			return (*s1_str - *s2_str);
		s1_str++;
		s2_str++;
	}
	return (0);
}
