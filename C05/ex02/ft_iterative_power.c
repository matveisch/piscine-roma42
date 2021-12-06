/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:12:45 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/06 16:24:50 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power != 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	main()
{
	int nb = 0;
	int power = 0;
	printf("%i\n", ft_iterative_power(nb, power));
}
