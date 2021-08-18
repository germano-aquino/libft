#include <limits.h>
#include <stdio.h>
static int	ft_getSignal(const char *str, int *i)
{
	int signal;

	signal = 1;
	if ( *(str + *i) == '+' || *(str + *i) == '-')
	{
		if ( *(str + *i) == '-')
			signal = -1;
		i[0]++;
	}
	return (signal);
}

int	ft_atoi(const char *str)
{
	int	i;
	long long int	number;
	int	signal;
	int	count;

	i = 0;
	count = 0;
	number = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	signal = ft_getSignal(str, &i);
	while ('0' <= str[i] && str[i] <= '9')
	{
		count++;
		number = number * 10 + signal * (str[i] - '0');
		i++;
	}
	if (count > 10 && signal == -1)
		return (0);
	else if(count > 10 && signal == 1)
		return (-1);
	return (number);
}
