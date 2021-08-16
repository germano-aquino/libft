#include <stdlib.h>
static int     ft_isCharInSet(char chr, char const *set)
{
    int     i;

    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == chr)
            return (1);
        i++;
    }
    return (0);
}

static int  ft_getStrTrimLength(char const *str, char const *set)
{
    int     startIndex;
    int     endIndex;

    startIndex = 0;
    while (ft_isCharInSet(str[startIndex], set))
        startIndex++;
    endIndex = startIndex;
    while (str[endIndex] != '\0')
        endIndex++;
    endIndex--;
    while (ft_isCharInSet(str[endIndex], set))
        endIndex--;
    return (endIndex - startIndex + 1);
}

char    *ft_strtrim(char const *str, char const *set)
{
    int     len;
    int     startIndex;
    int     i;
    char    *ptr;

    len = ft_getStrTrimLength(str, set);
    ptr = (char *) malloc((len + 1) * sizeof(char));
    if (!str || !ptr)
        return (0);
    startIndex = 0;
    while (ft_isCharInSet(str[startIndex], set))
        startIndex++;
    i = 0;
    while(i < len)
    {
        ptr[i] = str[startIndex + i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}