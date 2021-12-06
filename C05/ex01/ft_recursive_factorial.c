/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:04:08 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/06 16:12:12 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb < 0)
		return (0);
	else
		return (1);
}

int	main()
{
	int nb = 6;
	printf("%i\n", ft_recursive_factorial(nb));
}
