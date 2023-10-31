/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:00:53 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/20 21:40:50 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (*(s1 + index) != 0 && *(s2 + index) != 0 && index < n)
	{
		if (*(s1 + index) == *(s2 + index))
			index++;
		else
			return (*(s1 + index) - *(s2 + index));
	}
	if (index == n)
		return (0);
	return (0);
}
