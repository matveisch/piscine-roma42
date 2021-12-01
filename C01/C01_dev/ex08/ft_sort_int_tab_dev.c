#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{

			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int size = 4;
	int tab[size];

	tab[0] = 3;
	tab[1] = 1;
	tab[2] = 4;
	tab[3] = 2;
	ft_sort_int_tab(tab, size);
	printf("%d %d %d %d\n", tab[0], tab[1], tab[2], tab[3]);
}
