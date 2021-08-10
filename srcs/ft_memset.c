#include <stddef.h>

void    *ft_memset(void *block, int c, size_t size)
{
    int i;
    unsigned char *str;

    i = 0;
    str = block;
    while (i < size)
    {
        str[i] = (unsigned char) c;
        i++;
    }

    return (block);
}