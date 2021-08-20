#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	if (dest == NULL || src == NULL)
		return (0);
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	j = d_len;
	i = 0;
	while (src[i] != '\0' && i + 1 + d_len < size)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	if (size > d_len)
		return (s_len + d_len);
	else
		return (s_len + size);
}
