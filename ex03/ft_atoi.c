/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:13:30 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/03 12:50:08 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int min_am;
	int	sign;
	int number;

	i = 0;
	min_am = 0;
	sign = 1;
	number = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			min_am++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10 + str[i] - '0';
		}
		else if (str[i + 1] < '0' && str[i + 1] > '9')

		{
			break ;
		}
		i++;
	}
	if (min_am % 2 != 0)
	{
		sign = -1;
	}
	return (number * sign);
}

int	main()
{
	char str[] = " ---+--+1234ab567";
	int num = ft_atoi(str);
	printf("%i\n", num);
	return (0);
}
