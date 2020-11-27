/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 13:18:08 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/06 15:46:24 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_sign(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\f' || c == '\v' || c == '\b' || c == '\r')
		return (0);
	return (1);
}

int			ft_atoi(const char *nptr)
{
	long long	nbr;
	int			sign;

	nbr = 0;
	sign = 1;
	if (nptr == NULL)
		return (0);
	while (ft_check_sign(*nptr) == 0)
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (sign > 0 && ((nbr == 922337203685477580 && *nptr > '7') ||
					(nbr > 922337203685477580 && *nptr >= '0')))
			return (-1);
		if (sign < 0 && ((nbr == 922337203685477580 && *nptr > '8') ||
					(nbr > 922337203685477580 && *nptr >= '0')))
			return (0);
		nbr = nbr * 10 + *(nptr++) - 48;
	}
	return ((int)(nbr * sign));
}
