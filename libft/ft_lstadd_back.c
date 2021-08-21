#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int	i;

	i = 0;
	if ((*lst) != 0)
	{
		while((lst[i])->next != NULL)
			i++;
		lst[i]->next = new;
		new->next = NULL;
	}
	else
	{
		*lst = new;
		new->next = NULL;
	}
}
