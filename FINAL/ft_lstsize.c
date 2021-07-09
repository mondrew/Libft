#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int n;

	n = 1;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		n++;
	}
	return (n);
}
