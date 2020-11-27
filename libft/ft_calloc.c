/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broselee <broselee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 21:38:26 by broselee          #+#    #+#             */
/*   Updated: 2020/05/27 23:17:10 by broselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned		n;
	unsigned char	*ptr;
	size_t			i;
	size_t			size_m;

	size_m = (size_t)~0;
	if ((nmemb && size_m / nmemb < size) ||
		(size && size_m / size < nmemb))
		return (NULL);
	i = 0;
	n = nmemb * size;
	ptr = (unsigned char *)malloc(n);
	if (!ptr)
		return (NULL);
	while (n--)
		ptr[i++] = '\0';
	return ((void *)ptr);
}
