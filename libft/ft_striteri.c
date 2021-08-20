void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			if (!f)
				break ;
			f(i, s + i);
			i++;
		}
	}
}
