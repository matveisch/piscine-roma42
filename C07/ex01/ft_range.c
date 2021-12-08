/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:43:16 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/08 15:27:14 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return ((void *)0);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == ((void *)0))
		return ((void *)0);
	i = 0;
	while (min != max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

int	main()
{
	int min = 3;
	int max = 10;
	int length = max - min;
	for (int i = 0; i < length; i++)
		printf("%d", ft_range(min, max)[i]);
}
