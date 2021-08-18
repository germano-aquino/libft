#include <limits.h>

static void	ft_getNumber(char *str, int *number, int signal, int *count)
{
	int	i;

	i = 0;
	*number = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		*count++;
		*number = *number * 10 + signal * (str[i] - '0');
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int				i;
	long long int	number;
	int				signal;
	int				count;

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
	ft_getNumber(str + i, &number, signal, &count);
	if (count > 10 && signal == -1)
		return (0);
	else if (count > 10 && signal == 1)
		return (-1);
	return (number);
}
