/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:29:14 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/01 13:49:00 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (s1[i] != '\0')
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
	char s1[] = "hello";
	char s2[] = "heLlo";
	printf("%i\n", ft_strcmp(s1, s2));
}
