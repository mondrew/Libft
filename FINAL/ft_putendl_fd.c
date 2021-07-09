#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	c;

	c = '\n';
	if (s == NULL)
		return ;
	while (*s != '\0')
		write(fd, s++, 1);
	write(fd, &c, 1);
}
