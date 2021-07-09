#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		lst->content = NULL;
		free(lst);
		lst = NULL;
	}
}
