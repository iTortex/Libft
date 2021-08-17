#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*dellst;

	newlst = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		dellst = ft_lstnew((*f)(lst->content));
		if (!dellst)
		{
			ft_lstclear(&newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, dellst);
		lst = lst->next;
	}
	return (newlst);
}
