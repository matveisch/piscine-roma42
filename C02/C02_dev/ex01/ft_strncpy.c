/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoinich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:01:20 by mvoinich          #+#    #+#             */
/*   Updated: 2021/11/29 16:30:56 by mvoinich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	i = 0;
	while (((unsigned int)i) < n)
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}

int	main(void)
{
	char dest[100];
	char src[100] = "hello, my friend";
	
	printf("%s\n", ft_strncpy(dest, src, 10));
}
