#include <stddef.h>

static int	ft_diffsign(unsigned char a, unsigned char b)
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
	size_t			i;
	unsigned char	*pt1;
	unsigned char	*pt2;

	if (!s2 && !s1)
		return (0);
	pt1 = (unsigned char *) s1;
	pt2 = (unsigned char *) s2;
	i = 0;
	while (i < size && pt1[i] == pt2[i])
		i++;
	if (i == size)
		return (0);
	else
		return (ft_diffsign(pt1[i], pt2[i]));
}
