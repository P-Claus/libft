/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:12:28 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/17 14:14:06 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		*(char *)(dest + counter) = *(char *)(src + counter);
		counter++;
	}
}
