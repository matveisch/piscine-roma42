#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int main(void)
{
	int i;

	i = 0;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			ft_putstr("fizzbuzz");
		}
		else if (i % 5 == 0)
		{
			ft_putstr("buzz");
		}
		else if (i % 3 == 0)
		{
			ft_putstr("fizz");
		}
		else
		{
			ft_putnbr(i);
		}
		ft_putchar('\n');
		i++;
	}
}