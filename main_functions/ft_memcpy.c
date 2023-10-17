/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:12:28 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/17 14:12:44 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
        	*(char *)(dest + counter) = *(char *)(src + counter);
		counter++;
	}
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 20
#define NUMBER_OF_STRINGS 10

int main(void)
{
	srand(time(NULL));

	for (int loop = 0; loop < NUMBER_OF_STRINGS; loop++)
	{
		int string_length = rand() % MAX_STRING_LENGTH + 1;
		char src[string_length + 1];
		for (int i = 0; i < string_length; ++i)
		{
			if (rand() % 2 == 0)
				src[i] = rand() % 26 + 'a';
			else
				src[i] = rand() % 26 + 'A';
		}
		src[string_length] = '\0';
    
	char dst1[string_length + 1];
	char dst2[string_length + 1];

	for (int index = 0; index <= string_length; index++)
	{
		dst1[index] = '\0';
		dst2[index] = '\0';
	}
	printf("Random string: %s\n", src);
	printf("-------------------------------------------------\n");
	printf("Before the function (dst 1): %s\n", dst1);
	printf("Before the function (dst 2): %s\n", dst2);
	printf("-------------------------------------------------\n");
	memcpy(dst1, src, 8);
	ft_memcpy(dst2, src, 8);
	printf("After memcpy (dst 1): %s\n", dst1);
	printf("After ft_memcpy (dst 2): %s\n", dst2);
	printf("-------------------------------------------------\n");
	printf("\n\n\n\n\n");
    }
}

