#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int	main(void)
{
	char *str;

	printf("%d\n", ft_strlen("hello"));
}
