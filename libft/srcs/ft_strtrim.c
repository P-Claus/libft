/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:34:44 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/25 21:55:40 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_calculate_len(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

static int	ft_char_in_string(char c, char const *set)
{
	size_t index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index++] = c)
			return (1);
	}
	return (0);
}

char	ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t = start;
	size_t = last;
	size_t	trimmed_len;
	char	trimmed_string;

	len = ft_calculate_len(s1);
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_char_in_string(s1[start], set))
		start++;
	while (last > start && ft_char_in_string(s1[last - 1], set))
		last--;
	trimmed_len = last - start;
	trimmed_string = (char *) malloc((trimmed_len + 1) * sizeof(char));
	if (!trimmed_string)
		return (NULL);
	//copy the trimmed string to the new variable from the old one without
	//the characters that need to be trimmed
}

int	main(void)
{
	char	*test = "test";
	ft_strtrim(test, 'e');
}
