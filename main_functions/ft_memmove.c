/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:37:51 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/18 13:33:39 by pclaus           ###   ########.fr       */
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
			counter--;
			*(unsigned char *)(dst + counter) = \
				*(unsigned char *)(src + counter);
		}
	}
	else
	{
		counter = 0;
		while (counter < len)
		{
			*(unsigned char *)(dst + counter) = \
				*(unsigned char *)(src + counter);
			counter++;
		}
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[] = "hellomyfriend";
	char	s2[] = "hellomyfriend";

	printf("String 1: %s\n", s1);
	printf("String 2: %s\n", s2);
	memmove(s1 + 3, s1, 5);	
	ft_memmove(s2 + 3, s2, 5);	
	printf("String 1 after memmove: %s\n", s1);
	printf("String 2 after ft_memmove: %s\n", s2);
	
}*/
