char    *ft_strrchr(const char *str, int c)
{
    int     len;

    len = 0;
    while(str[len] != '\0')
        len++;
    while(len >= 0 && str[len] != c)
        len--;
    if (len != -1)
        return (char *)(str + len);
    else
        return (0);
}