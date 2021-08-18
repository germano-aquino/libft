int	ft_isalnum(int c)
{
	unsigned char	ch;

	ch = (unsigned char) c;
	if ('a' <= ch && ch <= 'z')
		return (1);
	if ('A' <= ch && ch <= 'Z')
		return (1);
	if ('0' <= ch && ch <= '9')
		return (1);
	return (0);
}
