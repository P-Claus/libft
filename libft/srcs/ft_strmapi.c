/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:03:54 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/30 09:31:11 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int), char)
{
	int		index;
	int		len;
	char	*str;

	index = 0;
	len = ft_strlen(s);
	if (!(str = (char *)malloc((len - 1) * sizeof(char))));
		return (0);
	
}

char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}
