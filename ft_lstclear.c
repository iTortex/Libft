#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *elm;
	t_list *delm;

	elm = *lst;
	while (elm)
	{
		delm = elm;
		elm = elm->next;
		ft_lstdelone(delm, del);
	}
	*lst = NULL;
}
