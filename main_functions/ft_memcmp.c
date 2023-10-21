/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:14:51 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/21 15:34:52 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (*(char *)(s1 + counter) != '0' && *(char *)(s2 + counter) != '0' && counter < n)
	{
		if (*(char *)(s1 + counter) == *(char *)(s2 + counter))
			counter++;
		else
			return (*(char *)(s1 + counter) - *(char *)(s2 + counter));
	}
	if (counter == 0)
		return (0);
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s1 = "";
	char *s2 = "";
	printf("The result of memcmp is: %d\n", memcmp(s1, s2, 25));
	printf("The result of ft_memcmp is: %d\n", ft_memcmp(s1, s2, 25));
}
