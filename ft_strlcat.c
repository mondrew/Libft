#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	full_len;

	i = 0;
	j = 0;
	full_len = 0;
	if ((src != NULL && size != 0) || (dest != NULL || size != 0))
	{
		while (dest[i] != '\0' && i < size)
			i++;
		full_len = i + ft_strlen(src);
		if (i == size)
			return (full_len);
		while ((src[j] != '\0') && (i + j < (size - 1)))
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
		return (full_len);
	}
	return (ft_strlen(src));
}
