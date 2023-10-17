/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:37:51 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/17 22:09:35 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	temp[len];
	size_t		counter;

	counter = 0;
	while (counter < len)
	{
		*(char *)(temp + counter) = *(char *)(src + counter);
		counter++;
	}
	counter = 0;
	while (counter < len)
	{
		*(char *)(dst + counter) = *(char *)(temp + counter);
		counter++;
	}
	return (dst);
	
}
/*
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
	
}*/
