/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:59:12 by mvoinich          #+#    #+#             */
/*   Updated: 2021/11/30 10:10:42 by mvoinich         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (i < ft_strlen(str))
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			flag = 1;
		} else if (str[i] >= 65 && str[i] <= 90)
		{
			flag = 1;
		} else if (str[i] == '\0')
		{
			flag = 1;
		} else
		{
			flag = 0;
			break;
		}
		i++;
	}
	return (flag);
}

int	main(void)
{
	char *str;
	str = "hell01o";
	printf("%i\n", ft_str_is_alpha(str));
}
