#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*tmp;

	tmp = s;
	while (n-- > 0)
		*((unsigned char *)tmp++) = c;
	return (s);
}
