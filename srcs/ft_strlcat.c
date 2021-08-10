#include <stddef.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  len;
    size_t  i;

    if (!src || !dst)
        return (0);
    len = 0;
    while(dst[len] != '\0')
        len++;
    i = 0;
    while(i < size -1)
    {
        dst[len + i] = src[i];
        i++;
    }
    dst[len + i] = '\0';
    return(len + i);
}