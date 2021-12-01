/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:37:50 by mvoinich          #+#    #+#             */
/*   Updated: 2021/11/30 11:45:37 by mvoinich         ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] >= 32 && str[i] <= 127)
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

int	main()
{
	char *str;
	str = "";
	printf("%d\n", ft_str_is_printable(str));
}
