#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		len1;
	int		len2;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s1 || !s2 || !str)
		return (0);
	i = 0;
	while (i < len1 + len2)
	{
		if (i < len1)
			str[i] = s1[i];
		else
			str[i] = s2[i - len1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
