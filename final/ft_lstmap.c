/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 20:53:04 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/04 21:14:34 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;

	new_lst = NULL;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		if (f(lst->content) != NULL)
			ft_lstadd_back(&new_lst, ft_lstnew(lst->content));
		else
			del(lst->content);
		lst = lst->next;
	}
	return (new_lst);
}
