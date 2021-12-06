/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:04:11 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/06 11:49:29 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				flag;

	i = 0;
	flag = 0;
	while (((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i]) && n > 0)
	{
		i++;
		n--;
	}
	if (s1[i] == s2[i] || n == 0)
	{
		flag = 0;
	}
	else
	{
		flag = s1[i] - s2[i];
	}
	return (flag);
}
		

int	main()
{
	char s1[] = "helLo";
	char s2[] = "hello";
	printf("%i\n", strncmp(s1, s2, 5));
	printf("%i\n", ft_strncmp(s1, s2, 5));
}
