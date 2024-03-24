/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:41:47 by pclaus            #+#    #+#             */
/*   Updated: 2024/03/24 17:03:24 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

size_t	gnl_ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*gnl_ft_strchr(char *str, int c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	if (c == '\0')
		return ((char *)&str[gnl_ft_strlen(str)]);
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

void	*gnl_ft_calloc(size_t num_elements, size_t element_size)
{
	void	*ptr;
	size_t	counter;
	size_t	total_size;

	counter = 0;
	total_size = num_elements * element_size;
	if (num_elements != 0 && element_size != 0 && total_size
		/ num_elements != element_size)
		return (0);
	ptr = malloc(total_size);
	if (ptr == 0)
		return (0);
	while (counter < total_size)
	{
		((char *)ptr)[counter] = 0;
		counter++;
	}
	return (ptr);
}

char	*gnl_ft_strjoin(char *dst, char *src)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!dst)
	{
		dst = (char *)malloc(1 * sizeof(char));
		dst[0] = '\0';
	}
	if (!dst || !src)
		return (NULL);
	str = malloc(sizeof(char) * ((gnl_ft_strlen(dst) + gnl_ft_strlen(src))
				+ 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (dst)
		while (dst[++i] != '\0')
			str[i] = dst[i];
	while (src[j] != '\0')
		str[i++] = src[j++];
	str[gnl_ft_strlen(dst) + gnl_ft_strlen(src)] = '\0';
	free(dst);
	return (str);
}
