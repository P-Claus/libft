/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:00:53 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/31 15:29:23 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	if (n == 0)
		return (0);
	index = 0;
	while (s1[index] ==  s2[index] && s1[index] != '\0')
	{
		if (index < (n - 1))
			index++;
		else
			return (0);
	}
	return ((unsigned char) (s1[index]) - (unsigned char)(s2[index]));
}

#include "stdio.h"
#include "string.h"

int	main(void)
{
	char *s1 = "tests";
	char *s2 = "testss";

	printf("The value of strncmp is: %d\n", strncmp(s1, s2, 7));
	printf("The value of ft_strncmp is: %d\n", ft_strncmp(s1, s2, 7));
}
