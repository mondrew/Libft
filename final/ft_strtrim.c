/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:51:29 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/04 17:17:46 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim_back(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	flag;

	i = ft_strlen(s1) - 1;
	j = 0;
	flag = 0;
	while (flag == 0 && i >= 0)
	{
		while (flag == 0 && set[j] != '\0')
		{
			if (s1[i] == set[j++])
				flag = 1;
		}
		if (flag == 1)
			flag = 0;
		else
			flag = 1;
		i--;
		j = 0;
	}
	if (flag == 1)
		return (++i);
	return (ft_strlen(s1) - 1);
}

static int	ft_trim_front(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	while (flag == 0 && s1[i] != '\0')
	{
		while (flag == 0 && set[j] != '\0')
		{
			if (s1[i] == set[j++])
				flag = 1;
		}
		if (flag == 1)
			flag = 0;
		else
			flag = 1;
		i++;
		j = 0;
	}
	if (flag == 1)
		return (--i);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*new_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	start = ft_trim_front(s1, set);
	end = ft_trim_back(s1, set);
	new_str = malloc(sizeof(char) * (end - start + 2));
	if (new_str == NULL)
		return (NULL);
	while (start <= end)
		new_str[i++] = s1[start++];
	new_str[i] = '\0';
	return (new_str);
}
