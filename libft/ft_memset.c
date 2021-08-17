#include <stddef.h>

void	*ft_memset(void *block, int c, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = block;
	if (!block)
		return (0);
	while (i < size)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (block);
}