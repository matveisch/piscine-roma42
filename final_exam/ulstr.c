#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;

		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				ft_putchar(argv[1][i] - 32);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				ft_putchar(argv[1][i] + 32);
			}
			else
			{
				ft_putchar(argv[1][i]);
			}
			i++;
		}
	}
	else
	{
		ft_putchar('\n');
	}
}