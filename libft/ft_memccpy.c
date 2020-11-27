/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broselee <broselee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 21:25:44 by broselee          #+#    #+#             */
/*   Updated: 2020/05/27 23:25:11 by broselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if (dest == src)
		return (dest);
	i = 0;
	ptr_dest = (unsigned char*)dest;
	ptr_src = (unsigned char*)src;
	while (i < n)
	{
		*ptr_dest = ptr_src[i];
		ptr_dest++;
		if (ptr_src[i] == (unsigned char)c)
			return (ptr_dest);
		i++;
	}
	return (NULL);
}
