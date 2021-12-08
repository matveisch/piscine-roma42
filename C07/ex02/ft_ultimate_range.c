/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:04:56 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/08 14:07:49 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int *temp;

	if (min >= max)
		return (-1);
	temp = (int *)malloc(sizeof(int) * (max - min));
	if (temp == ((void *)0))
		return (-1);
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	*range = temp;
	return (i);
}

int	main()
{
	int	*range = 0;
	int min = 3;
	int max = 10;
	int length = max - min;
	
	printf("%i\n", ft_ultimate_range(&range, min, max));
	for (int i = 0; i < length; i++)
		printf("%i ", range[i]);
}
