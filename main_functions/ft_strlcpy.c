/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:00:44 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/31 13:34:27 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[len] != '\0' && len < dstsize - 1)
	{
		dst[len] = src[len];
		len++;
	}
	if (len < dstsize - 1)
		dst[len] = '\0';
	if (len < dstsize)
		dst[len] = '\0';
	while (src[len] != '\0')
		len++;
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main() {
    char destination[10]; // Allocate a destination buffer with a size of 10
    char destination1[10]; // Allocate a destination buffer with a size of 10
    const char *source = "fghdjksqgfhjkdsq";
    size_t copied_len = ft_strlcpy(destination, source, sizeof(destination));
    size_t copied_len1 = strlcpy(destination1, source, sizeof(destination1));

    printf("Copied string: %s\n", destination);
    printf("Copied string1: %s\n", destination1);
    printf("Number of characters copied: %zu\n", copied_len);
    printf("Number of characters copied1: %zu\n", copied_len1);

    return 0;
}
*/
