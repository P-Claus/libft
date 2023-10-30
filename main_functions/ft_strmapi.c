/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:03:54 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/30 18:35:43 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	int		len;
	char	*str;

	index = 0;
	len = ft_strlen(s);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str || !s)
		return (NULL);
	while (index < len)
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}

#include <stdio.h>
#include <stdlib.h>
char to_uppercase(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    printf("The index is: %d and the character is: %c\n", index, c);
    return c;
}

int	main(void)
{
	char str1[] = "hjfkdqshjk";
	char* str2;
	str2 = ft_strmapi(str1, to_uppercase);
	printf("%s\n", str2);
	free(str2);
}
