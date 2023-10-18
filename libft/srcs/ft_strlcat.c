/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:22:28 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/18 22:00:46 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calculate_length(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	int		src_len;
	int		src_index;
	int		dst_index;

	dst_len = ft_calculate_length(dst);
	src_len = ft_calculate_length(src);
	src_index = 0;
	dst_index = dst_len;
	while (src [src_index] != '\0' && dst_index < (int) size - 1)
	{
		dst[dst_index] = src[src_index];
		dst_index++;
		src_index++;
	}
	dst[dst_index] = '\0';
	return (dst_len + src_len);
}
