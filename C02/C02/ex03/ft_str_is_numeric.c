/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 10:21:24 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/01 12:42:44 by mvoinich         ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] >= 48 && str[i] <= 57)
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
