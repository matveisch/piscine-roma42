/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:22:34 by mvoinich          #+#    #+#             */
/*   Updated: 2021/11/28 11:03:15 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	number[4];

	number[0] = -1;
	while (++number[0] <= 98)
	{
		number[1] = number[0];
		while (++number[1] <= 99)
		{
			number[2] = number[0] / 10 + '0';
			write(1, &number[2], 1);
			number[2] = number[0] % 10 + '0';
			write(1, &number[2], 1);
			write(1, &" ", 1);
			number[3] = number[1] / 10 + '0';
			write(1, &number[3], 1);
			number[3] = number[1] % 10 + '0';
			write(1, &number[3], 1);
			if (number[0] != 98)
			{
				write(1, &",", 1);
				write(1, &" ", 1);
			}
		}
	}
}
