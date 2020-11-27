/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broselee <broselee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 22:26:09 by broselee          #+#    #+#             */
/*   Updated: 2020/05/29 16:36:24 by broselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		len = 0;
	else
	{
		s_len -= start;
		if (s_len < len)
			len = s_len;
	}
	if (!(new = (char *)malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		new[i] = ((char *)s)[start + i];
		++i;
	}
	new[i] = '\0';
	return (new);
}
