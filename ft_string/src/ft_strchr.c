/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 21:03:19 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/12/10 16:26:49 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/* Locate first occurrence of character in string */
char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s)
	{
		if (*s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == 0)
		return ((char *)s);
	return (NULL);
}
