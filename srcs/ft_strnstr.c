#include <stddef.h>

char    *ft_strnstr(const char *big, const char *little, size_t size)
{
    int i;
    int j;

    if (!big || !little)
        return (0);
    i = 0;
    j = 0;
    while (size--)
    {
        while (big[i + j] == little[j])
        {
            if (little[j + 1] == '\0')
                return (char *) (big + i);
            j++;
        }
        j = 0;
        i++;
    }
    return (0);
}