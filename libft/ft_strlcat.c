/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:22:28 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/18 14:26:00 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	src_len;
	int	dst_len;
	int	index;
	int	src_index;

	src_len = ft_strlen(src) -1;
	dst_len = size -1;
	index = dst_len; 
	src_index = 0;
	while (src[src_index] != '\0')
	{
		dst[index] = src[src_index];
		index++;
		src_index++;
	}
	dst[index] = '\0';

	return (src_len + dst_len);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello world";
	char dst[20] = "this is id my haha";
	printf("%lu\n", strlcat(dst, str, sizeof(dst)));
	printf("%lu\n", sizeof(dst));
	printf("%d\n", ft_strlcat(dst, str, sizeof(dst)));
	printf("%s\n", dst);
}
