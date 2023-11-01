/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:49:25 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/01 15:39:05 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *) s;
	character = (unsigned char) c;
	index = 0;
	while (index < n)
	{
		if (*str == character)
			return (str);
		index++;
		str++;
	}
	return (0);
}
