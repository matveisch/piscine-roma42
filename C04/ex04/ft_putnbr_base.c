/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:42:31 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/06 13:33:27 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_length;

	base_length = 0;
	while (base[base_length] != '\0')
	{
		base_length++;
	}
	//works with hex and octal
	ft_putchar(base[nbr / base_length]);
	ft_putchar(base[nbr % base_length]);
}

int	main()
{
	char *base = "01";
	int nbr = 5;
	ft_putnbr_base(nbr, base);
}
