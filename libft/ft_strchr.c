/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broselee <broselee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 22:18:07 by broselee          #+#    #+#             */
/*   Updated: 2020/05/25 16:45:27 by broselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (s && s[++i])
		if (s[i] == c)
			return ((char*)s + i);
	return (NULL);
}
