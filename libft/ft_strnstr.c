#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	size_t	i;
	size_t	j;

	if (!big && !little)
		return (0);
	if (*little == '\0')
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < size && big[i] != '\0')
	{
		while (big[i + j] == little[j] && little[j] != '\0')
			j++;
		if (little[j] == '\0' && i + j + 1 <= size)
			return ((char *)(big + i));
		j = 0;
		i++;
	}
	return (0);
}
