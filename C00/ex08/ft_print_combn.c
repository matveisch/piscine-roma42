/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:57:41 by mvoinich          #+#    #+#             */
/*   Updated: 2021/11/27 16:07:48 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	if (n == 2)
	{
		int	i;
		int	j;

		i = '0';
		j = '1';
		while (j <= 9)
		{
			write(1, &i, 1);
			write(1, &j, 1);
			write(1, &" ", 1);
			j++;
			if (j == 9)
			{
				i++;
				j = i + 1;
			}
		}
	}
}

int	main(void)
{
	ft_print_combn(2);
}
