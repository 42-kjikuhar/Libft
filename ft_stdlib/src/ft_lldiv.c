/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lldiv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:56:09 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/01/16 14:19:13 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

t_ft_lldiv	ft_lldiv(long long numer, long long denom)
{
	t_ft_lldiv	d;

	d.quot = numer / denom;
	d.rem = numer % denom;
	return (d);
}
