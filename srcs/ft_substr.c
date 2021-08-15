#include <stddef.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ptr;
    size_t  i;

    ptr = (char *) malloc((len + 1) * sizeof(char));
    if(!ptr || !s)
        return (0);
    i = 0;
    while (i < len)
    {
        ptr[i] = s[start + i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}