char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != (unsigned char)c && str[i] != '\0')
		i++;
	if (str[i] != '\0' || c == '\0')
		return ((char *)(str + i));
	else
		return (0);
}
