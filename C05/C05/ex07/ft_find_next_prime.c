/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:43:54 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/07 18:01:40 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_find_next_prime(int nb)
{
	nb++;
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
