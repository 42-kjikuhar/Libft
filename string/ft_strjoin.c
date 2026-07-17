/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:47:54 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/07/17 20:38:12 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, char const *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	sum_len;

	if (!s1 || !s2)
		return (NULL);
	sum_len = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(char) * (sum_len + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, ft_strlen(s1));
	ft_strcat(dest, s2);
	return (dest);
}
