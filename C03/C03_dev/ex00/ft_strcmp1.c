/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:29:14 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/06 11:14:31 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
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
	char s1[] = "hel";
	char s2[] = "hello";
	printf("%i\n", strcmp(s1, s2));
	printf("%i\n", ft_strcmp(s1, s2));
}
