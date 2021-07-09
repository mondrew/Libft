#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	len;
	int		i;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len != 0 && ft_strchr(set, s1[len]))
		len--;
	new_str = malloc(sizeof(char) * (len + 2));
	if (new_str == NULL)
		return (NULL);
	len++;
	while (len-- > 0)
		new_str[i++] = *(s1++);
	new_str[i] = '\0';
	return (new_str);
}
