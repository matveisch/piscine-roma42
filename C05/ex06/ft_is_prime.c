/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:28:34 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/07 09:36:34 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	flag;

	i = 2;
	flag = 1;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			flag = 0;
			break ;
		}
		i++;
	}
	return (flag);
}

int	main()
{
	int	nb = 15;
	printf("%i\n", ft_is_prime(nb));
}
