/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 19:14:49 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/04 20:07:33 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (*lst == NULL)
		return;
	ft_lstclear(&((*lst)->next), del);
	del((*lst)->content);
	(*lst)->content = NULL;
	free(*lst);
	*lst = NULL;
}
