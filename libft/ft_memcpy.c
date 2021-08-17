#include <stddef.h>

void	*ft_memcpy(void *restrict to, const void *restrict from, size_t size)
{
	size_t		i;
	const char	*src;
	char		*dest;

	i = 0;
	src = from;
	dest = to;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (to);
}
