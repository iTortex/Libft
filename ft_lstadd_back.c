#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *elm;

	if (*lst)
	{
		elm = *lst;
		while (elm->next)
			elm = elm->next;
		elm->next = new;
	}
	else
		*lst = new;
}
