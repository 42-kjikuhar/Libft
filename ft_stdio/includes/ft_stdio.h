/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:59:56 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/01/16 14:21:23 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include "ft_printf_utils.h"
# include <errno.h>
# include <pthread.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <sys/syscall.h>
# include <unistd.h>

typedef struct s_ft_file
{
	int				fd;
	char			*buf;
	size_t			buf_size;
	size_t			pos;
	int				flags;
	pthread_mutex_t	lock;
}					t_ft_file;

int					ft_getchar(void);
int					ft_getc(FILE *stream);
int					ft_fgetc(FILE *stream);
int					ft_putc(int c, FILE *stream);
int					ft_puts(const char *s, FILE *stream);
int					ft_printf(const char *format, ...);
int					ft_vprintf(const char *format, va_list *ap);
int					ft_dprintf(int fd, const char *format, ...);
int					ft_vdprintf(int fd, const char *format, va_list *ap);
ssize_t				my_fwrite(const void *ptr, size_t size, size_t nmemb,
						file_t *f);
void				ft_putchar(char c);
int					my_fflush(file_t *f);
ssize_t				ft_read(int fd, void *buf, size_t count);
ssize_t				ft_write(int fd, const void *buf, size_t count);

#endif
