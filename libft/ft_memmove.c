/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:37:51 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/17 22:47:24 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;

	if (!dst && !src)
		return (0);
	if (src < dst)
	{
		counter = len;
		while (counter > 0)
		{
			--counter;
			((unsigned char *) dst)[counter] = ((unsigned char *) dst)[counter];
		}
	}
	else
	{
		counter = 0;
		while (counter < len)
		{
			((unsigned char *) dst)[counter] = ((unsigned char *) src)[counter];
			counter++;
		}
	}	
	return (dst);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[] = "He is the boss of the whole company";
	char	s2[] = "He is the boss of the whole company";
	char	s3[] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	char	s4[] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";

	printf("String 1: %s\n", s1);
	printf("String 2: %s\n", s2);
	printf("String 3: %s\n", s3);
	printf("String 4: %s\n", s4);
	memmove(s3 + 5, s1, 14);	
	ft_memmove(s4 + 5, s2, 14);	
	printf("String 1 after memmove: %s\n", s1);
	printf("String 2 after ft_memmove: %s\n", s2);
	printf("String 3 after memmove: %s\n", s3);
	printf("String 4 after ft_memmove: %s\n", s4);
	
}
