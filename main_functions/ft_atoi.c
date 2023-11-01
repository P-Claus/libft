/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:21:59 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/01 09:33:18 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	iter;
	int	sign;
	int	result;

	iter = 0;
	sign = 1;
	result = 0;
	while (str[iter] && ((str[iter] >= 9 && str[iter] <= 13) || \
				str[iter] == 32))
		iter++;
	if (str[iter] == '+' || str[iter] == '-')
	{
		if (str[iter] == '-')
			sign = -1;
		iter++;
	}
	while (str[iter] >= '0' && str[iter] <= '9' && str[iter] != '\0')
	{
		result = result * 10 + str[iter] - '0';
		iter++;
	}
	return (result * sign);
}
