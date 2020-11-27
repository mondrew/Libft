/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 10:27:03 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/05 19:31:09 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*tmp;

	tmp = NULL;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && n > 0)
	{
		tmp = (char *)needle;
		while (*haystack == *tmp && *haystack != '\0' && *tmp != '\0' && n > 0)
		{
			haystack++;
			tmp++;
			n--;
		}
		if (*tmp == '\0')
			return ((char *)haystack - (tmp - (char *)needle));
		if (*haystack != '\0')
			haystack++;
		n--;
	}
	return (NULL);
}
