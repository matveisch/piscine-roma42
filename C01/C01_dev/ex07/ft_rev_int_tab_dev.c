#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], (&tab[size - 1 - i]));
		i++;
	}
}

int	main(void)
{
	int size = 3;
	int tab[size];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;

	ft_rev_int_tab(tab, size);
	printf("%d %d %d\n", tab[0], tab[1], tab[2]);
}
