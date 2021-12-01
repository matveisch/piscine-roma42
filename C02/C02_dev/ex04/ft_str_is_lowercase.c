/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:46:22 by mvoinich          #+#    #+#             */
/*   Updated: 2021/11/30 10:53:08 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int	ft_str_is_lowercase(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			flag = 1;
		} else
		{
			flag = 0;
			break;
		}
		i++;
	}
	if (str[0] == '\0')
	{
		flag = 1;
	}
	return flag;
}

int	main(void)
{
	char *str;
	str = "helLo";
	printf("%d\n", ft_str_is_lowercase(str));
}
