#include <stdlib.h>

void	*ft_calloc(size_t count, size_t eltsize)
{
	void			*ptr;
	unsigned char	*str;
	size_t			i;

	i = 0;
	ptr = malloc(count * eltsize);
	if (!ptr)
		return (0);
	str = (unsigned char *)ptr;
	while (i < count * eltsize)
	{
		str[i] = (unsigned char) 0;
		i++;
	}
	return (ptr);
}
