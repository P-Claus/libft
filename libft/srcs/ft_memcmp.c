/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:14:51 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/21 15:38:30 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (*(char *)(s1 + counter) != '0' \
			&& *(char *)(s2 + counter) != '0' \
			&& counter < n)
	{
		if (*(char *)(s1 + counter) == *(char *)(s2 + counter))
			counter++;
		else
			return (*(char *)(s1 + counter) - *(char *)(s2 + counter));
	}
	if (counter == 0)
		return (0);
	return (0);
}
