#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (!lst)
		return (0);
	size++;
	while((*lst).next != NULL)
	{
		size++;
		lst = (*lst).next;
	}
	return (size);
}