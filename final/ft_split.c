/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 18:29:07 by mondrew           #+#    #+#             */
/*   Updated: 2020/05/04 17:28:58 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_lets(char const *s, char c)
{
	int	counter;

	counter = 0;
	while (*s != c && *s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

static int	ft_count_words(char const *s, char c)
{
	int		counter;

	counter = 0;
	while (*s != '\0')
	{
		if (*s != c && *s != '\0')
		{
			while (*s != c && *s != '\0')
				s++;
			counter++;
		}
		if (*s != '\0')
			s++;
	}
	return (counter);
}

static int	ft_allocate(char const *s, char c, char **array, char ***arr)
{
	*array = malloc(sizeof(char) * (ft_count_lets(s, c) + 1));
	if (*array == NULL)
	{
		free(*arr);
		return (0);
	}
	return (1);
}

char		**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;

	array = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (array == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			j = 0;
			if (ft_allocate(s, c, &(array[i]), &array) == 0)
				return (NULL);
			while (*s != c && *s != '\0')
				array[i][j++] = *(s++);
			array[i++][j] = '\0';
		}
	}
	array[i] = NULL;
	return (array);
}
