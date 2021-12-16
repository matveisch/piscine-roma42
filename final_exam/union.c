#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int never_appeared(char *str, int max_pos, char c)
{
	int i;

	i = 0;
	while (i < max_pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		if (never_appeared(s1, i, s1[i]) == 1)
		{
			ft_putchar(s1[i]);
		}
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		if (never_appeared(s1, i, s2[j]) && never_appeared(s2, j, s2[j]))
			ft_putchar(s2[j]);
		j++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}