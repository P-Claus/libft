/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:00:53 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/20 21:39:22 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (*(s1 + index) != 0 && *(s2 + index) != 0 && index < n)
	{
		if (*(s1 + index) == *(s2 + index))
			index++;
		else
			return (*(s1 + index) - *(s2 + index));
	}
	if (index == n)
		return (0);
	return (0);
			
}

#include "stdio.h"
#include "string.h"

int	main(void)
{
	char *s1 = "";
	char *s2 = "";

	printf("The value of strncmp is: %d\n", strncmp(s1, s2, 8));
	printf("The value of ft_strncmp is: %d\n", ft_strncmp(s1, s2, 8));
}


