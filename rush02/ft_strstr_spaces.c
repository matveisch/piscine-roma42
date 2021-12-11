#include <stdio.h>

int		ft_is_spaced(char c)
{
	if ((c == ':') || (c == 32) || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		while (str[i + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
				return (str + i);
			k++;
		}
		k = 0;
		i++;
	}
	return ((void *)0);
}

int main()
{
	char *str = "0: zero\n1: one\n2: two\n3: three\n4: four\n5: five\n6: six\n7: seven\n8: eight\n9: nine\n10: ten";

	char *to_find = "5: five";
	printf("%s\n", ft_strstr(str, to_find));
}