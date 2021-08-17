#include <stddef.h>

int	ft_diffsign(int a, int b)
{
	if (a > b)
		return (1);
	else if (a == b)
		return (0);
	else
		return (-1);
}

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t	i;
	char	*pt1;
	char	*pt2;

	if (!s2 || !s1)
		return (0);
	pt1 = (char *) s1;
	pt2 = (char *) s2;
	i = 0;
	while (pt1[i] != '\0' && i < size && pt1[i] != pt2[i])
		i++;
	return (ft_diffsign(pt1[i], pt2[i]));
}
