/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:55:13 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/07/17 20:32:14 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// conversion
int					ft_atoi(char const *str);
char				*ft_itoa(int n);
int					ft_tolower(int c);
int					ft_toupper(int c);

// judge
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);

// list
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
int					ft_lstsize(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

// memory
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memchr(void const *s, int c, size_t n);
int					ft_memcmp(void const *s1, void const *s2, size_t n);
void				*ft_memcpy(void *dest, void const *src, size_t n);
void				*ft_memmove(void *dest, void const *src, size_t len);
void				*ft_memrchr(void const *s, int c, size_t n);
void				*ft_memset(void *s, int c, size_t n);

// original functions
void				ft_swap(int *a, int *b);
int					is_blank_line(char const *s);
int					ft_isspace(char c);
int					ft_max_int(int a, int b, int *m);
long				ft_max_long(long a, long b);
long long			ft_max_long_long(long long a, long long b);
size_t				ft_max_size_t(size_t a, size_t b);
unsigned int		ft_max_unsigned_int(unsigned int a, unsigned int b);
int					ft_min_int(int a, int b);
long				ft_min_long(long a, long b);
long long			ft_min_long_long(long long a, long long b);
size_t				ft_min_size_t(size_t a, size_t b);
unsigned int		ft_min_unsigned_int(unsigned int a, unsigned int b);

// sort
void				ft_sort_int_array(int *array, size_t len);
void				ft_qsort_int(int *array, int left, int right);
int					ft_partition_int(int *array, int left, int right);

// output
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);

// string
void				ft_free_split(char **split);
char				**ft_split(char const *s, char c);
char				*ft_strchr(char const *s, int c);
char				*ft_strdup(char const *s);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoin3(char const *s1, char const *s2,
						char const *s3);
size_t				ft_strlcat(char *dst, char const *src, size_t size);
size_t				ft_strlcpy(char *dst, char const *src, size_t size);
size_t				ft_strlen(char const *s);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(char const *s1, char const *s2, size_t n);
char				*ft_strnstr(char const *big, char const *little,
						size_t len);
char				*ft_strrchr(char const *s, int c);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);

#endif
