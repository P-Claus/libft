/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:45:34 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/25 14:49:02 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculate_length(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_length;
	int		index;
	int		index_s1;
	int		index_s2;
	char	*new_string;

	index = 0;
	index_s1 = 0;
	index_s2 = 0;
	total_length = calculate_length(s1) + calculate_length(s2);
	new_string = (char *) malloc((total_length + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (s1[index_s1] != '\0')
		new_string[index++] = s1[index_s1++];
	while (s2[index_s2] != '\0')
		new_string[index++] = s2[index_s2++];
	new_string[index++] = '\0';
	return (new_string);
}
