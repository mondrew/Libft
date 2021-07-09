#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*tmp;
	size_t	len_needle;
	size_t	i;
	size_t	j;

	i = 0;
	tmp = (char *)haystack;
	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return (tmp);
	if (ft_strlen(haystack) < len_needle || n < len_needle)
		return (NULL);
	while (tmp[i] && i <= n - len_needle)
	{
		j = 0;
		while (needle[j] && needle[j] == tmp[i + j])
			j++;
		if (j == len_needle)
			return (&tmp[i]);
		i++;
	}
	return (NULL);
}
