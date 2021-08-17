#include <stdlib.h>

static int  ft_getNumberOfStrings(const char *s, char c)
{
    int counter;
    int newStringWasCounted;
    int i;

    counter = 0;
    i = 0;
    newStringWasCounted = 0;
    while (s[i] != '\0')
    {
        if (!newStringWasCounted && s[i] != c)
        {
            counter++;
            newStringWasCounted = 1;
        }
        if (newStringWasCounted && s[i] == c)
            newStringWasCounted = 0;
        i++;
    }
    return (counter);
}

static int  ft_getNextValidIndex(char const *s, char c, int index)
{
    while (s[index] == c)
        index++;
    return (index);
}

static int  ft_getLastValidIndex(char const *s, char c, int index)
{
    while (s[index] != c)
        index++;
    return (index - 1);
}

static void ft_copyStringToPtr(char const *s, int startIndex, int endIndex, char *ptr)
{
    int i;

    i = 0;
    while (i < endIndex - startIndex + 1)
    {
        ptr[i] = s[startIndex + i];
        i++;
    }
    ptr[i] = '\0';
}

char    **ft_split(char const *s, char c)
{
    int     numberOfStrings;
    int     startIndex;
    int     endIndex;
    int     i;
    char    **ptr;

    numberOfStrings = ft_getNumberOfStrings(s, c);
    ptr = (char **) malloc(sizeof(char *) * (numberOfStrings + 1));
    if (!ptr || !s)
        return (0);
    i = 0;
    startIndex = 0;
    while (i < numberOfStrings)
    {
        startIndex = ft_getNextValidIndex(s, c, startIndex);
        endIndex = ft_getLastValidIndex(s, c, startIndex);
        ptr[i] = (char *) malloc(sizeof(char) * (endIndex - startIndex + 2));
        if(!ptr[i])
            return (0);
        ft_copyStringToPtr(s, startIndex, endIndex, ptr[i]);
        startIndex = endIndex + 1;
        i++;
    }
    ptr[i] = (char *) malloc(sizeof(char) * 1);
    ptr[i] = NULL;
    return (ptr);
}