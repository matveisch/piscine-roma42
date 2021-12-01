/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:04:11 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/01 14:11:24 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int	flag;

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

int	main()
{
	char s1[] = "helLO";
	char s2[] = "hello";
	printf("%i\n", ft_strncmp(s1, s2, 5));
}
