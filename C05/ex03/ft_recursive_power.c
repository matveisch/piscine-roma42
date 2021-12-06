/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:25:26 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/06 16:30:03 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}

int	main()
{
	int nb = 0;
	int power = 0;
	printf("%i\n", ft_recursive_power(nb, power));
}
