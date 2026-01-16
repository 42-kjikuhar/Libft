/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:53:07 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/01/16 14:19:09 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <limits.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_ft_div
{
	int				quot;
	int				rem;
}					t_ft_div;

typedef struct s_ft_ldiv
{
	long			quot;
	long			rem;
}					t_ft_ldiv;

typedef struct s_ft_lldiv
{
	long long		quot;
	long long		rem;
}					t_ft_lldiv;

int					ft_abs(int i);
long				ft_labs(long i);
long long			ft_llabs(long long i);

t_ft_div			ft_div(int numer, int denom);
t_ft_ldiv			ft_ldiv(long numer, long denom);
t_ft_lldiv			ft_lldiv(long long numer, long long denom);

int					ft_atoi(const char *nptr);
long				ft_atol(const char *nptr);
long long			ft_atoll(const char *nptr);
char				*ft_itoa(int n);
long				ft_strtol(const char *nptr, char **endptr, int base);
long long			ft_strtoll(const char *nptr, char **endptr, int base);
unsigned long		ft_strtoul(const char *nptr, char **endptr, int base);
unsigned long long	ft_strtoull(const char *nptr, char **endptr, int base);

void				*ft_calloc(size_t count, size_t size);

/* ft_strtoll_utils.c */
int					ft_isspace_utils(char c);
int					char_to_digit_utils(char c);
int					check_overflow(unsigned long long acc, int digit, int base);
char				*handle_base_prefix(char *s, int *base);
char				*preprocess_input(const char *nptr, int *negative,
						int *base);
int					convert_digits(const char **s, int base,
						unsigned long long *acc);
long long			finalize_result(unsigned long long acc, int negative,
						int overflow);
#endif
