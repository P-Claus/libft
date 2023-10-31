/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:02:46 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/25 13:41:54 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	counter;

	counter = 0;
	substring = (char *) malloc(len * sizeof(char));
	if (substring == NULL)
		return (NULL);
	while (counter < len)
	{
		*(substring + counter) = *(s + start);
		counter++;
		start++;
	}
	return (substring);
}
