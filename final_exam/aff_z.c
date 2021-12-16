#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;

		i = 0;
		while (argv[1][i] != 'z')
		{
			i++;
		}
		if (argv[1][i] == 'z')
		{
			ft_putchar(argv[1][i]);
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('z');
			ft_putchar('\n');
		}
	}
	else
	{
		ft_putchar('z');
		ft_putchar('\n');
	}
}
