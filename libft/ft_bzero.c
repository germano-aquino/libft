#include <stddef.h>

void	ft_bzero(void *block, size_t size)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = block;
	while (i < size)
	{
		str[i] = (unsigned char) 0;
		i++;
	}
}
