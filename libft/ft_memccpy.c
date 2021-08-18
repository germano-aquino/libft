#include <stddef.h>

void	*ft_memccpy(void *restrict to, const void *restrict from, int c,
	size_t size)
{
	size_t	i;
	char	*src;
	char	*dest;

	if (!to && !from)
		return (0);
	src = (char *)from;
	dest = (char *)to;
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		if (src[i] == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
