#include <stddef.h>

void	*ft_memchr(const void *block, int c, size_t size)
{
	char	*ptr;
	size_t	i;
	char	chr;

	ptr = (char *) block;
	i = 0;
	chr = (char) c;
	while (i < size && ptr[i] != chr)
		i++;
	if (i != size)
		return ((void *)ptr + i);
	else
		return (0);
}
