/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 09:28:34 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/08 13:27:43 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	p;

	p = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (p <= nb / p)
	{
		if (nb % p == 0)
			return (0);
		p++;
	}
	return (1);
}
