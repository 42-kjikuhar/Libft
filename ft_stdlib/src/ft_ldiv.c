/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldiv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:55:37 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/01/16 14:19:12 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

t_ft_ldiv	ft_ldiv(long numer, long denom)
{
	t_ft_ldiv	d;

	d.quot = numer / denom;
	d.rem = numer % denom;
	return (d);
}
