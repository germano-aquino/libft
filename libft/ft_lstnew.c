#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = NULL;
	if (content)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (new == NULL)
			return (0);
		(*new).content = content;
		(*new).next = NULL;
	}
	return (new);
}