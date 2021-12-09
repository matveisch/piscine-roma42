#include <stdio.h>
#include <stdlib.h>

int	max(int *tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int max;
	max = tab[len - 1];
	while (len != 0)
	{
		if (tab[len] > max)
			max = tab[len];
		len--;
	}
	return (max);
}

int	main()
{
	int *tab;
	tab = (int *)malloc(sizeof(int) * 4);
	tab[0] = 3;
	tab[1] = 9;
	tab[2] = 6;
	tab[3] = 1;
	printf("%i\n", max(tab, 4));
}
