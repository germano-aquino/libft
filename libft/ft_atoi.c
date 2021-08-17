#include <limits.h>

int	ft_atoi(const char *str)
{
	int	i;
	long long int	number;
	int	signal;
	int	count;

	i = 0;
	count = 0;
	signal = 1;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	number = 0;
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
