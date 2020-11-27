/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 22:29:39 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/05 13:32:15 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*((unsigned char *)s1) == *((unsigned char *)s2))
		{
			s1++;
			s2++;
		}
		else
			return (*((unsigned char *)s1) - *((unsigned char *)s2));
		n--;
	}
	return (0);
}
