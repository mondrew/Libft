/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 19:29:50 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/05 15:59:56 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		*((unsigned char *)dest) = *((unsigned char *)src);
		if (*((unsigned char *)src) == (unsigned char)c)
		{
			(unsigned char *)dest++;
			return ((unsigned char *)dest);
		}
		(unsigned char *)dest++;
		(unsigned char *)src++;
		n--;
	}
	return (NULL);
}
