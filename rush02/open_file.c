/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:04:35 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/12 12:04:43 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	char	c;

	if (begin >= end)
		return ;
	c = *(x + begin);
	*(x + begin) = *(x + end);
	*(x + end) = c;
	reverse(x, ++begin, --end);
}

void	open_file(char *buffer, int size)
{
	int		fh;
	int		rd;

	fh = open("numbers.dict", O_RDONLY);
	rd = read(fh, buffer, size);
	buffer[rd] = '\0';
}

void	int_to_str(char *ptr, int size, int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		ptr[i] = ((num % 10) + 48);
		num = num / 10;
		i++;
	}
	ptr[i] = '\0';
}

void	print_number(char *start)
{
	int	i;

	i = 0;
	while (start[i] != '\n')
	{
		if (start[i] != ' ' && start[i] != ':'
			&& !(start[i] >= '0' && start[i] <= '9'))
			ft_putchar(start[i]);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	number = number * sign;
	return (number);
}

int	if_el_to_nt(int argc, char **argv)
{
	if (ft_atoi(*argv) >= 11 && ft_atoi(*argv) <= 19)
	{
		return (1);
	}
	return (0);
}

void	one_ten_eleven(int argc, char **argv)
{
	//opening the file and creating one big string
	char	buffer[2048];
	open_file(buffer, 2048);

	//condition for single digit numbers and those with 0 in the end
	char	*start;

	start = ft_strstr(buffer, argv[1]);
	print_number(start);
}

void	two_digits(int argc, char **argv)
{
	//opening the file and creating one big string
	char	buffer[2048];
	open_file(buffer, 2048);

	//getting the first number
	int	num1;

	num1 = (argv[1][0] - '0') * 10;
	//convert first number into string
	char	ptr[50];

	int_to_str(ptr, 50, num1);
	//reverse string
	reverse(ptr, 0, ft_strlen(ptr) - 1);
	//using strstr to get exact number
	char	*start;

	start = ft_strstr(buffer, ptr);
	print_number(start);
	//second number
	//getting the second number
	int	num2;
	
	num2 = (argv[1][1] - '0');
	//convert second number into string
	char	ptr1[50];

	int_to_str(ptr1, 50, num2);
	ft_putchar('-');
	//using strstr to get exact number
	char	*start1;

	start1 = ft_strstr(buffer, ptr1);
	print_number(start1);
}

int if_three_el_nt(int argc, char *argv)
{
	int	num;

	num = ft_atoi(argv);
	if ((num % 100) >= 11 && (num % 100) <= 19)
	{
		return (1);
	}
	return (0);
}

void	three_digits(int argc, char **argv)
{
	//opening the file and creating one big string
	char	buffer[2048];
	open_file(buffer, 2048);

	int	num1;
	int num2;
	int	num3;
	char ptr[50];
	char ptr1[50];
	char ptr2[50];
	char	*start;
	
	num1 = (argv[1][0] - '0');
	int_to_str(ptr, 50, num1);
	start = ft_strstr(buffer, ptr);
	print_number(start);

	ft_putchar('-');

	start = ft_strstr(buffer, "100");
	print_number(start);

	ft_putchar('-');
	if (if_three_el_nt(argc, argv[1]) == 1)
	{
		int	num;
		char str[50];

		num = ft_atoi(argv[1]);
		num = num % 100;
		int_to_str(str, 50, num);
		reverse(str, 0, ft_strlen(str) - 1);
		start = ft_strstr(buffer, str);
		print_number(start);
	}
	else
	{
		num2 = (argv[1][1] - '0');
		num2 = num2 * 10;
		int_to_str(ptr1, 50, num2);
		reverse(ptr1, 0, ft_strlen(ptr1) - 1);
		start = ft_strstr(buffer, ptr1);
		print_number(start);
		
		ft_putchar('-');
		num3 = (argv[1][2] - '0');
		int_to_str(ptr2, 50, num3);
		start = ft_strstr(buffer, ptr2);
		print_number(start);

	}
}

int	main(int argc, char **argv)
{
	if (ft_strlen(argv[1]) == 1
		|| (ft_strlen(argv[1]) == 2 && argv[1][1] == '0'))
	{
		one_ten_eleven(argc, argv);
	}
	else if (ft_strlen(argv[1]) == 2 && (if_el_to_nt(argc, &argv[1])) == 1)
	{
		one_ten_eleven(argc, argv);
	}
	else if (ft_strlen(argv[1]) == 2 && !(argv[1][1] == '0'))
	{
		two_digits(argc, argv);
	}
	else if (ft_strlen(argv[1]) == 3)
	{
		three_digits(argc, argv);
	}
}
