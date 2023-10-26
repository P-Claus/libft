/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:34:44 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/26 18:38:43 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	last;
	char	*trimmed_string;

	start = 0;
	last = ft_strlen(s1) - 1;
	if (s1 == NULL || set == NULL)
		return (0);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (last > start && ft_strchr(set, s1[last]))
		last--;
	len = last - start + 1;
	trimmed_string = (char *) malloc((len + 1) * sizeof(char));
	if (!trimmed_string)
		return (0);
	ft_strlcpy(trimmed_string, s1 + start, len + 1);
	return (trimmed_string);
}
#include <stdio.h>
int	main(void)
{
	char	*test = "hhaacutsaahh";
	char	*trimmed_s = ft_strtrim(test, "hh");
	printf("The trimmed string is: %s\n", trimmed_s);
	free(trimmed_s);

}
