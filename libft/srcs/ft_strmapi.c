/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:03:54 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/30 16:53:43 by pclaus           ###   ########.fr       */
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
	if (!str)
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
char	f(unsigned int i, char c)
{
	char	*str;

	i = 0;
	str = NULL;
	str[i] = c + '5';
	return (*str);
}

int	main(void)
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, f);
	printf("%s\n", str2);
	free(str2);
}
