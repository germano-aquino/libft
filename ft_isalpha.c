int ft_isalpha(int c)
{
    if ('a' <= c && c <= 'z')
        return (1);
    else if ('A' <= c && c <= 'Z')
        return (1);
    else
        return (0);
}
