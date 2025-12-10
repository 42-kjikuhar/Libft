/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 05:14:00 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/12/10 16:27:35 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	char	*p;

	tmp = (char *)malloc(sizeof(s[0]) * (ft_strlen(s) + 1));
	if (tmp == NULL)
		return (NULL);
	p = tmp;
	while (*s)
	{
		*tmp = *s;
		s++;
		tmp++;
	}
	*tmp = '\0';
	return (p);
}
