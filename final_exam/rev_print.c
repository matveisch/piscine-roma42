#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char *rev_print(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		ft_putchar(str[i]);
		i--;
	}
	return (str);
}

int main()
{
	rev_print("Ponies are awesome");
	ft_putchar('\n');
}