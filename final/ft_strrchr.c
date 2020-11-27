/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 10:03:04 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/02 10:08:37 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = NULL;
	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			tmp = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (tmp);
}
