/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:53:05 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/12/10 21:06:26 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <sys/syscall.h>
#include <errno.h>

long	syscall(int num, int fd, void *buf, size_t count);

/* reimplimentation of read function */
ssize_t	ft_read(int fd, void *buf, size_t count)
{
	long	ret;

	ret = syscall(SYS_read, fd, buf, count);
	if (ret < 0)
	{
		errno = -ret;
		return (-1);
	}
	return (ret);
}
