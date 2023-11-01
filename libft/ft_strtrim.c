/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:34:44 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/01 17:22:35 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		last;
	char	*trimmed_string;

	start = 0;
	last = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (0);
	while (start <= last && ft_strchr(set, s1[start]))
		start++;
	if (last < start)
		return (ft_strdup(s1 + last + 1));
	while (ft_strchr(set, s1[last]) && last >= 0)
		last--;
	trimmed_string = (char *) malloc((last - start + 2) * sizeof(char));
	if (!trimmed_string)
		return (0);
	ft_strlcpy(trimmed_string, &s1[start], last - start + 2);
	return (trimmed_string);
}
