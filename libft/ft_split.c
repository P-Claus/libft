/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:31:23 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/04 22:57:22 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_of_substrings(char const *s, char c)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && count == 0)
		{
			count = 1;
			index++;
		}
		else if (*s == c)
			count = 0;
		s++;
	}
	return (index);
}

static char	*copy_word(const char *s, int start, int finish)
{
	int		index;
	char	*substring;

	index = 0;
	substring = malloc((finish - start + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	while (start < finish)
		substring[index++] = s[start++];
	substring[index] = '\0';
	return (substring);
}

void	cleanup_strings(char **strings, size_t j)
{
    while (j > 0)
    {
        j--;
        free(strings[j]);
    }
    free(strings);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	char	**strings;
	size_t	i;
	size_t	j;

	index = -1;
	i = 0;
	j = 0;
	strings = malloc((number_of_substrings(s, c) + 1) * sizeof(char *));
	if (!s || !strings)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			if ((strings[j] = copy_word(s, index, i)) == 0)
			{
				cleanup_strings(strings, j);	
				return (NULL);
			}
			j++;
			index = -1;
		}
		i++;
	}
	strings[j] = 0;
	return (strings);
}
