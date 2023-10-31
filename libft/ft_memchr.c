/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:49:25 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/20 22:09:05 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;
	char	*str;

	str = (char *) s;
	index = 0;
	while (*(str + index) != 0 && index < n)
	{
		if (*(str + index) == c)
			return ((char *)str + index);
		index++;
	}
	return (0);
}
