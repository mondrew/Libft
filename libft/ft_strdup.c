/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broselee <broselee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 21:52:05 by broselee          #+#    #+#             */
/*   Updated: 2020/05/25 16:38:40 by broselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*s;
	size_t	i;

	i = 0;
	if (!(s = malloc(ft_strlen(src) + 1)))
		return (NULL);
	while (i < ft_strlen(src) + 1)
	{
		s[i] = src[i];
		i++;
	}
	return (s);
}
