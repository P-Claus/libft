/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:37:51 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/18 13:34:34 by pclaus           ###   ########.fr       */
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
