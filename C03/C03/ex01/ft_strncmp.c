/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:04:11 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/03 10:45:45 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				flag;

	i = 0;
	flag = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
		{
			flag = 0;
		}
		else if (s1[i] > s2[i])
		{
			flag = 1;
			break ;
		}
		else if (s1[i] < s2[i])
		{
			flag = -1;
			break ;
		}
		i++;
	}
	return (flag);
}
