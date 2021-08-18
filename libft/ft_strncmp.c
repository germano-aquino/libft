#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	if (!s1 && !s2)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < size - 1)
		i++;
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}
