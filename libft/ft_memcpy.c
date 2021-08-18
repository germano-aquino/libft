#include <stddef.h>

void	*ft_memcpy(void *restrict to, const void *restrict from, size_t size)
{
	size_t		i;
	const char	*src;
	char		*dest;

	if (!to && !from)
		return (0);
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
