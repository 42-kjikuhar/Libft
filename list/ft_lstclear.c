/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 15:40:38 by kjikuhar          #+#    #+#             */
/*   Updated: 2026/07/17 20:24:10 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Deletes and frees the given list and its content */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_list;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		if (current->content)
			(*del)(current->content);
		next_list = current->next;
		free(current);
		current = next_list;
	}
	*lst = NULL;
}
