/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broselee <broselee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 23:24:34 by broselee          #+#    #+#             */
/*   Updated: 2020/05/25 16:33:44 by broselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			get_size(unsigned int n)
{
	unsigned int	size;

	size = 0;
	while (n >= 10)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

char				*ft_itoa(int n)
{
	char			*res;
	unsigned int	num;
	unsigned int	i;
	unsigned int	size;

	if (n < 0)
		num = (unsigned int)(n * -1);
	else
		num = (unsigned int)n;
	size = (unsigned int)get_size(num);
	i = 0;
	if (!(res = (char*)malloc(sizeof(char) * (size + 1 + (n < 0 ? 1 : 0)))))
		return (NULL);
	if (n < 0 && (res[i] = '-'))
		size++;
	i = size - 1;
	while (num >= 10)
	{
		res[i--] = (char)(num % 10 + 48);
		num /= 10;
	}
	res[i] = (char)(num % 10 + 48);
	res[size] = '\0';
	return (res);
}
