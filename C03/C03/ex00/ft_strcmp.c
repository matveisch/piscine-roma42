/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:29:14 by mvoinich          #+#    #+#             */
/*   Updated: 2021/12/06 11:51:58 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
