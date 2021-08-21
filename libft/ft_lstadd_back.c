#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		(*lst)->next = new->next;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		last = new;
		last->next = new->next;
	}
}
