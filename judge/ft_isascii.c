/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:20:17 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/01/21 10:56:57 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ASCII_MAX 0x7F /* 127 */

int	ft_isascii(int c)
{
	return ((unsigned)c <= ASCII_MAX);
}
