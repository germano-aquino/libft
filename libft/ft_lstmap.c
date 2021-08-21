#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*newLst;
	t_list	*iter;

	if (!lst)
		return (0);
	newLst = NULL;
	while(lst)
	{
		iter = ft_lstnew(f(lst->content));
		if(!iter)
			ft_lstclear(&iter, del);
		else
			ft_lstadd_back(&newLst, iter);
		lst = lst->next;
	}
	return (newLst);
}