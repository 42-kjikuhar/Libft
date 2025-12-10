/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 22:36:41 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/12/10 16:28:26 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/* Undefined if s == NULL && n > 0. */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*uc_dst;

	if (!n)
		return (s);
	uc_dst = (unsigned char *)s;
	while (n--)
		*uc_dst++ = (unsigned char)c;
	return (s);
}
