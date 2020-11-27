/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:08:41 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/02 12:43:06 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	j = 0;
	n = 0;
	if (src == NULL || dest == NULL)
		return (0);
	while (dest[i] != '\0')
		i++;
	if (i >= size)
		return (size + ft_strlen(src));
	n = i;
	while (src[j] != '\0' && i < (size - 1))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (n + ft_strlen(src));
}
