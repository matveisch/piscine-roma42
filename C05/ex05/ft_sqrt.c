/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:08:41 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/07 09:20:56 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	temp;

	sqrt = 1;
	temp = 1;
	while (temp <= nb)
	{
		sqrt++;
		temp = sqrt * sqrt;
	}
	sqrt -= 1;
	if (sqrt * sqrt != nb)
	{
		return (0);
	}
	return (sqrt);
}

int	main()
{
	int nb = 4;
	printf("%f\n", sqrt(nb));
	printf("%i\n", ft_sqrt(nb));
}
