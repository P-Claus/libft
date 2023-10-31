/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:41:06 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/31 18:59:40 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (!needle)
		return (char *)(haystack);
	while (haystack[h] != '\0')
	{
		while ((haystack[h + n]) == needle[n] \
				&& (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)(haystack + h ));
		h++;
	}
	return (0);
}
/*
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len);

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
