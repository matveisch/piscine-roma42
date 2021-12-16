int	ft_atoi(const char *str)
{
	int i;
	int number;
	int sign;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] == '\r') || (str[i] == '\v') || (str[i] == '\f')
	|| (str[i] == '\t') || (str[i] == '\n') || (str[i] == ' '))
	{
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	number = number * sign;
	return (number);
}

#include <stdio.h>

int	main()
{
	char str[] =  " ---+--+1234ab567";
	int num = ft_atoi(str);
	printf("%i\n", num);
	return (0);
}