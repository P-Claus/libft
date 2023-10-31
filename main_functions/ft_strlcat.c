/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:22:28 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/31 14:06:16 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_index;
	size_t	src_index;

	dst_index = 0;
	src_index = 0;
	while (dst[dst_index] && dst_index < size)
		dst_index++;
	while (src[src_index] && (dst_index + src_index + 1) < size)
	{
		dst[dst_index + src_index] = src[src_index];
		src_index++;
	}
	if (dst_index < size)
		dst[dst_index + src_index] = '\0';
	return (dst_index + ft_strlen(src));
}

#include <stdio.h>
int main() {
    char destination[20] = "Hello, ";
    const char *source = "World!";
    size_t destination_size = sizeof(destination);

    printf("Original destination: %s\n", destination);

    size_t result = ft_strlcat(destination, source, destination_size);

    printf("Concatenated string: %s\n", destination);
    printf("Total length after concatenation: %zu\n", result);

    return 0;
}
