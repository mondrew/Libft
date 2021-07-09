#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *tmp;

	tmp = dest;
	if (dest != NULL || src != NULL)
	{
		if (src == dest)
			return (dest);
		else if (src < dest)
		{
			while (n > 0)
			{
				((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
				n--;
			}
		}
		else
		{
			while (n-- > 0)
				*((unsigned char *)tmp++) = *((unsigned char *)src++);
		}
		return (dest);
	}
	return (NULL);
}
