#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int number;
	int sign;

	i = 0;
	sign = 1;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == '\t' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	number *= sign;
	return (number);
}

int main()
{
	char *str = " ---+--+1234ab567";
	int num = ft_atoi(str);
	printf("%i\n", num);
}
