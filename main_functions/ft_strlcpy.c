/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:00:44 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/18 14:16:15 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	while (src[len] != '\0' && len + 1 < dstsize)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	while (src[len] != '\0')
		len++;
	return (len);
}

#include <stdio.h>
#include <string.h>

int main() {
    char destination[20];
    const char *source = "Hello, World!";

    size_t result1 = ft_strlcpy(destination, source, sizeof(destination));
    size_t result2 = strlcpy(destination, source, sizeof(destination));  // Using the standard strlcpy for comparison

    printf("Your ft_strlcpy result: %zu\n", result1);
    printf("Standard strlcpy result: %zu\n", result2);
    printf("Destination: %s\n", destination);

    return 0;
}

