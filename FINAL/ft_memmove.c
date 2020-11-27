/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 19:02:04 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/09 15:48:50 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *tmp;

	tmp = dest;
	if (dest != NULL || src != NULL)
	{
		if (src == dest)
			return (dest);
		else if (src < dest)
		{
			while (n > 0)
			{
				((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
				n--;
			}
		}
		else
		{
			while (n-- > 0)
				*((unsigned char *)tmp++) = *((unsigned char *)src++);
		}
		return (dest);
	}
	return (NULL);
}
