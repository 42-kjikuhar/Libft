/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 20:47:54 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/12/10 16:27:56 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

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
	ft_strcpy(dest, s1);
	ft_strcat(dest, s2);
	return (dest);
}
