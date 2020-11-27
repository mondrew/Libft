/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 13:18:08 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/02 17:29:42 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int nbr;
	int sign;
	int i;

	nbr = 0;
	sign = 1;
	i = 0;
	if (nptr == NULL)
		return (0);
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' ||
		*nptr == '\f' || *nptr == '\v' || *nptr == '\b' || *nptr == '\r')
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		nbr = nbr * 10 + nptr[i++] - 48;
	if (i > 19 && sign > 0)
		nbr = -1;
	if (i > 19 && sign < 0)
		nbr = 0;
	return (nbr * sign);
}
