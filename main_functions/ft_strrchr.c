/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:18:58 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/31 14:42:28 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calculate_length(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_calculate_length(s);
	while ( index >= 0)
	{
		if (s[index] == c)
			return ((char *) s + index);
		index--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "I am the bos of the world!";

	printf("The result of strchr is: %s\n", strrchr(str, 'b'));
	printf("The result of ft_strchr is: %s\n", ft_strrchr(str, 'b'));
}*/
