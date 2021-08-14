#include <stdlib.h>

char    *ft_strdup(const char *str)
{
    char    *newStr;
    int     length;

    length = 0;
    while (str[length] != '\0')
        length++;
    newStr = malloc(length * sizeof(char));
    if (!newStr)
        return (0);
    length = 0;
    while (str[length] != '\0')
    {
        newStr[length] = str[length];
        length++;
    }
    newStr[length] = '\0';
    return (newStr);
}