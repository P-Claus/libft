/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:02:46 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/24 22:13:51 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*substring;

	substring = (char *) malloc(len * sizeof(char));
	while ()
}

int	main(void)
{
	char	*s = "hello my friend";
	int	start = 5;
	size_t	len = 5;

	printf("The substring is: ‰s\n", ft_substring(s, start, len));
}
