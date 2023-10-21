/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:41:06 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/21 17:11:48 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_calculate_length(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_index;
	size_t	needle_index;
	size_t	needle_length;

	haystack_index = 0;
	needle_index = 0;
	needle_length = ft_calculate_length(needle);
	while (*(haystack + haystack_index) != '\0' && haystack_index < len)
	{
		while (*(haystack + haystack_index) == *(needle + needle_index) && needle_index < needle_length)
		{
			haystack_index++;
			needle_index++;
			if (needle_index == needle_length)
				return ((char *)(haystack + (haystack_index - needle_length)));
		}
		haystack_index++;
		needle_index = 0;	
	}
	if (haystack_index == len)
		return (0);
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *haystack = "Hello my friend I am the boss of the company";
	char *needle = "boss";
	printf("The result of strnstr is: %s\n", strnstr(haystack, needle, 15));
	printf("The result of ft_strnstr is: %s\n", ft_strnstr(haystack, needle, 15));
}
