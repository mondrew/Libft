/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broselee <broselee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 10:30:50 by broselee          #+#    #+#             */
/*   Updated: 2020/05/27 23:16:29 by broselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int						ft_atoi(char *str)
{
	unsigned long long	res;
	int					neg;
	int					i;

	i = 0;
	res = 0;
	neg = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\v' ||
			*str == '\t' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if (i > 19 || res >= 9223372036854775808ULL)
		return (neg == 1 ? -1 : 0);
	return (res * neg);
}
