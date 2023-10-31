/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:14:51 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/31 15:59:29 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		if (((unsigned char *)s1)[counter] != ((unsigned char *)s2)[counter])
			return (((unsigned char *)s1)[counter] - \
					((unsigned char *)s2)[counter]);
		counter++;
	}
	return (0);
}
