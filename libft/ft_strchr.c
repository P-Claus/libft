/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:47:50 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/31 14:20:40 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	counter;

	counter = 0;
	if (!str)
		return (0);
	while (counter <= ft_strlen(str))
	{
		if (str[counter] == c)
			return ((char *) str + counter);
		counter++;
	}
	return (0);
}
