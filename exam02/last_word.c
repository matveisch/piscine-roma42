#include <stdio.h>
#include <unistd.h>

int	is_blank(char c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		while (argv[1][i] != '\0')
		{
			i++;
		}
		i--;
		while (argv[1][i] != '\0' && is_blank(argv[1][i]))
			i--;
		while (argv[1][i] != '\0' && !(is_blank(argv[1][i])))
			i--;
		i++;
		while (argv[1][i] != '\0' && argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
