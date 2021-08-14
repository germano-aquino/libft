#include <stddef.h>

void    *ft_memchr(const void *block, int c, size_t size)
{
    char    *ptr;
    int     i;
    char    chr;

    if (block == NULL)
        return (0)
    ptr = (char *) block;
    i = 0;
    chr = (unsigned char) c
    while(i < size && ptr[i] != chr)
        i++;
    if (ptr[i] == chr)
        return (void) (ptr + i);
    else
        return (0);
}