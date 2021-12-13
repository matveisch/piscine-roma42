#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char 	*final_string;
	int		length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	final_string = (char *)malloc(sizeof(char) * (length + 1));
	if (final_string == ((void *)0))
		return ((void *)0);
	i = 0;
	while (i < size)
	{
		ft_strcat(final_string, strs[i]);
		if ((i + 1) < size)
			ft_strcat(final_string, sep);
		i++;
	}
	return (final_string);
}

int	main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc - 1, argv + 1, "  "));
}