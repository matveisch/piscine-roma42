/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 13:40:35 by mvoinich          #+#    #+#             */
/*   Updated: 2021/11/28 13:41:07 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	number[3];

	number[0] = '0';
	while (number[0] <= '9')
	{
		number[1] = number[0] + 1;
		while (number[1] <= '9')
		{
			number[2] = number[1] + 1;
			while (number[2] <= '9')
			{
				write(1, &number[0], 1);
				write(1, &number[1], 1);
				write(1, &number[2], 1);
				if (number[0] < '7')
				{
					write(1, &",", 1);
					write(1, &" ", 1);
				}
				number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}
