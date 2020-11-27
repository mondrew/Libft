/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broselee <broselee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 22:53:26 by broselee          #+#    #+#             */
/*   Updated: 2020/05/27 23:50:14 by broselee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		words_count(char const *s, char c)
{
	int			count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char		*new_word(char const *s, char c)
{
	char		*word;
	int			i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static	void	tofree(int i, char **res)
{
	while (i != 0)
		free(res[--i]);
	free(res);
}

char			**ft_split(char const *s, char c)
{
	int			i;
	char		**res;

	if (s == NULL ||
		!(res = (char **)malloc(sizeof(char*) * (words_count(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(res[i++] = new_word(s, c)))
			{
				tofree(i, res);
				return (NULL);
			}
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = NULL;
	return (res);
}
