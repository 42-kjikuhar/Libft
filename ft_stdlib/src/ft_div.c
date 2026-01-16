/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:54:11 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/01/16 14:19:11 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

t_ft_div	ft_div(int numer, int denom)
{
	t_ft_div	d;

	d.quot = numer / denom;
	d.rem = numer % denom;
	return (d);
}
