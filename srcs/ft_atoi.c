#include <limits.h>
const int numberNotValid(const char *str)
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

const int getSignal(char signal)
{
    if (signal == '-')
        return (-1);
    else
        return (1);
}

int ft_atoi(const char *str)
{
    int     i;
    int     signal;
    long int    number;

    if (!str || numberNotValid(str))
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
        return (getSignal(str[0]) * number);
    else if (getSignal(str[0]) == 1 )
        return (INT_MAX);
    else
        return (INT_MIN);
}