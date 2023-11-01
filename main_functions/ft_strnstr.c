/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:41:06 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/31 19:38:35 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[h])
	{
		n = 0;
		while (haystack[h] == needle[n] && haystack[h] && h < len)
		{
			h++;
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)&haystack[h - n]);
		h = (h - n) + 1;
	}
	return (0);
}
/*
#include <stdio.h>

int main() {
    const char *haystack = "This is a sample string for testing.";
    const char *needle = "sample";
    size_t len = 20; // The maximum number of characters to search in haystack

    char *result = ft_strnstr(haystack, needle, len);

    if (result) {
        printf("Needle found: %s\n", result);
    } else {
        printf("Needle not found.\n");
    }

    return 0;
}
*/
