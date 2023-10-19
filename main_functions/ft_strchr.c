/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:47:50 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/19 22:07:12 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	counter;

	counter = 0;
	if (!str)
		return (0);
	while (str[counter] != '\0')
	{
		if (str[counter] == c)
			return ((char *) str + counter);
		counter++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "Hello world how is hte weather today";

	printf("The result of strchr is: %s\n", strchr(str, 'a'));
	printf("The result of ft_strchr is: %s\n", ft_strchr(str, 'a'));
}
