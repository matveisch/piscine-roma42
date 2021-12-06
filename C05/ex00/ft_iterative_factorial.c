/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:54:08 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/06 16:02:57 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}

int	main()
{
	int nb = 0;
	printf("%i\n", ft_iterative_factorial(nb));
}
