/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:33:56 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/07/17 21:04:21 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_unsigned(unsigned int nb, int fd)
{
	if (nb > 9)
		putnbr_unsigned(nb / 10, fd);
	write(fd, &(char){(char)(nb % 10 + '0')}, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		write(fd, "-", 1);
		nb = -(unsigned int)n;
	}
	else
	{
		nb = (unsigned int)n;
	}
	putnbr_unsigned(nb, fd);
}
