/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broselee <broselee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 21:37:06 by broselee          #+#    #+#             */
/*   Updated: 2020/05/25 16:34:52 by broselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;
	size_t size;

	i = -1;
	if (!(size = ft_strlen(needle)))
		return ((char *)haystack);
	while (haystack[++i] && i < n)
	{
		j = 0;
		while ((needle[j] == haystack[i + j]) && (i + j < n))
		{
			if (j == size - 1)
				return ((char *)(haystack + i));
			j++;
		}
	}
	return (NULL);
}
