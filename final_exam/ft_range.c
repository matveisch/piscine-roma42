#include <stdlib.h>

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

int *ft_range(int start, int end)
{
	int i;
	int *range;

	i = 0;
	if (start < end || start == end)
	{
		range = (int *)malloc(sizeof(int) * (end - start));
		while (start <= end)
		{
			range[i] = start;
			i++;
			start++;
		}
	}
	else if (start > end)
	{
		range = (int *)malloc(sizeof(int) * (start - end));
		while (start >= end)
		{
			range[i] = start;
			i++;
			start--;
		}
	}
	return (range);
}

#include <stdio.h>

int main()
{
	int start = 0;
	int end = -3;
	int length = start - end + 1;

	for (int i = 0; i < length; i++)
	{
		printf("%i ", ft_range(start, end)[i]);
	}
}