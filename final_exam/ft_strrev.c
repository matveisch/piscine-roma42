void ft_swap(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strrev(char *str)
{
	int i;
	int size;
	
	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		ft_swap(&str[i], &str[size - 1 - i]);
		i++;
	}

	return (str);
}

#include <stdio.h>

int main()
{
	char str[] = "hello";
	printf("%s\n", ft_strrev(str));
}