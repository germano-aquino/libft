#include <stddef.h>

void    *ft_memmove(void *to, const void *from, size_t size)
{
    const char  *src;
    char        *dest;
    char        temp[size];
    size_t         i;

    src = from;
    dest = to;
    i = 0;
    while (i < size)
    {
        temp[i] = src[i];
        i++;
    }
    i = 0;
    while (i < size)
    {
        dest[i] = temp[i];
        i++;
    }
    return (to);
}