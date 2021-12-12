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

void open_file(char *buffer, int size)
{
	int		fh;
	int		rd;

	fh = open("numbers.dict", O_RDONLY);
	rd = read(fh, buffer, size);
	buffer[rd] = '\0';
}

void int_to_str(char *ptr, int size, int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		ptr[i] = ((num % 10) + 48);
		num = num / 10;
		i++;
	}
}

void print_number(char *start)
{
	int	i;

	i = 0;
	while (start[i] != '\n')
	{
		if (start[i] != ' ' && start[i] != ':' && !(start[i] >= '0' && start[i] <= '9'))
			printf("%c", start[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	//opening the file and creating one big string
	char	buffer[2048];
	open_file(buffer, 2048);

	if (ft_strlen(argv[1]) == 1 || (ft_strlen(argv[1]) == 2 && argv[1][1] == '0'))
	{
		char *start = ft_strstr(buffer, argv[1]);
		print_number(start);
	}
	else if (ft_strlen(argv[1]) == 2 && !(argv[1][1] == '0'))
	{
		//getting the first number
		int num1 = (argv[1][0] - '0') * 10;

		//convert first number into string
		char ptr[50];
		int_to_str(ptr, 50, num1);

		//reverse string
		reverse(ptr, 0, ft_strlen(ptr) - 1);

		//using strstr to get exact number
		char *start = ft_strstr(buffer, ptr);
		print_number(start);

		//second number
		//getting the second number
		int num2 = (argv[1][1] - '0');

		//convert second number into string
		char ptr1[50];
		int_to_str(ptr1, 50, num2);

		printf(" ");

		//using strstr to get exact number
		char *start1 = ft_strstr(buffer, ptr1);
		print_number(start1);
	}
}