#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	reverse(char *x, int begin, int end)
{
	char c;

	if (begin >= end)
		return ;

	c = *(x+begin);
	*(x+begin) = *(x+end);
	*(x+end) = c;
	
	reverse(x, ++begin, --end);
}

int main(int argc, char **argv)
{
	//opening the file and creating one big string
	int		fh;
	int		rd;
	char	buffer[2048];
	
	fh = open("numbers.dict", O_RDONLY);
	rd = read(fh, buffer, 2048);
	buffer[rd] = '\0';

	//getting the first number
	char str2 = argv[1][1];
	int num = (argv[1][0] - '0') * 10;

	//convert number into string
	int j = 0;
	char ptr[50];
	while (num != 0)
	{
		ptr[j] = ((num % 10) + 48);
		num = num / 10;
		j++;
	}

	//reverse string
	reverse(ptr, 0, ft_strlen(ptr) - 1);

	//using strstr to get exact number
	char *start = ft_strstr(buffer, ptr);
	int i = 0;
	while (start[i] != '\n')
	{
		if (start[i] != ' ' && start[i] != ':' && !(start[i] >= '0' && start[i] <= '9'))
			printf("%c", start[i]);
		i++;
	}
	printf("\n");
}