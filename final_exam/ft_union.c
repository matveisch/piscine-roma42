#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int is_valid(char *str, int max_num, char c)
{
	int i;

	i = 0;
	while (i < max_num)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

void ft_equal(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		if (is_valid(s1, i, s1[i]))
		{	
			j = 0;
			while (s2[i] != '\0')
			{
				if (s2[j] == s1[i])
				{
					ft_putchar(s1[i]);
					break ;
				}
				j++;
			}
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_equal(argv[1], argv[2]);
	}
	ft_putchar('\n');
}