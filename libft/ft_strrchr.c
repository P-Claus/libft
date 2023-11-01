/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:18:58 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/01 09:05:41 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;
	int	match;

	index = 0;
	match = -1;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			match = index;
		index++;
	}
	if (c == '\0')
		return ((char *)&s[index]);
	if (match == -1)
		return (0);
	return ((char *)&s[match]);
}
