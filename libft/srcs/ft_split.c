/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:31:23 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/27 21:52:30 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_delimiter(char c, char del)
{
	if (c == del)
		return (1);
	if (c == 0)
		return (0);
	return (0);
}

char	**ft_split(char const *s, char c)
{

}

int	main(void)
{
	char *string = "He is the best friend I have ever had!";

}
