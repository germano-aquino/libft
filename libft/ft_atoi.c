#include <limits.h>

static int ft_numberNotValid(const char *str)
{
    int i;

    i = 0;
    if (str[0] == '-' || str[0] == '+')
        i++;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || '9' < str[i])
            return (1);
        i++;
    }
    return (0);
}

static int ft_getSignal(char signal)
{
    if (signal == '-')
        return (-1);
    else
        return (1);
}

int ft_atoi(const char *str)
{
    int     i;
    long int    number;

    if (!str || ft_numberNotValid(str))
        return (0);
    i = 0;
    if (str[0] == '+' || str[0] == '-')
        i++;
    number = 0;
    while (str[i] != '\0')
    {
        number = number * 10 + str[i] - '0';
        i++;
    }
    if (number <= INT_MAX)
        return (ft_getSignal(str[0]) * number);
    else if (ft_getSignal(str[0]) == 1 )
        return (INT_MAX);
    else
        return (INT_MIN);
}