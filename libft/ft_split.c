/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:31:23 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/28 18:25:42 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_delimiter(char c, char del)
{
	if (c == del)
		return (1);
	if (c == 0)
		return (1);
	return (0);
}

static int	number_of_substrings(char const *s, char c)
{
	int	index;
	int	count;

	index = 0;
	count = 1;
	while (s[index] != '\0')
	{
		if (check_delimiter(s[index], c))
		{
			count++;
			index++;
		}
		if (!check_delimiter(s[index], c))
			index++;
	}
	return (count);
}

static int	get_substring_length(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && !check_delimiter(s[len], c))
		len++;
	return (len);
}

static char	*copy_substring(const char *s, char c)
{
	int		len;
	int		index;
	char	*substring;

	index = 0;
	len = get_substring_length(s, c);
	substring = (char *) malloc(sizeof(char) * (len + 1));
	while (index < len && s[index] != c)
	{
		substring[index] = s[index];
		index++;
	}
	substring[index] = '\0';
	return (substring);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	char	**strings;

	index = 0;
	strings = (char **) malloc(sizeof(char *) \
			* (number_of_substrings((char *)s, c) + 1));
	if (!strings)
	{
		free(strings);
		return (NULL);
	}
	while (*s != '\0')
	{
		while (*s && check_delimiter(*s, c))
			s++;
		if (*s)
		{
			strings[index] = copy_substring((char *)s, c);
			index++;
		}
		while (*s && !check_delimiter(*s, c))
			s++;
	}
	strings[index] = 0;
	return (strings);
}
