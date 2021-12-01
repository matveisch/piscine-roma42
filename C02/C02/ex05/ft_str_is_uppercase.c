/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:47:04 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/01 12:47:08 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			flag = 1;
		}
		else
		{
			flag = 0;
			break ;
		}
		i++;
	}
	if (str[0] == '\0')
	{
		flag = 1;
	}
	return (flag);
}
