/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:21:59 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/20 18:08:48 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	iter;
	int	sign;
	int	result;

	iter = 0;
	sign = 1;
	result = 0;
	while ((str[iter] == 32) || (str[iter] >= 9 && str[iter] <= 13))
		iter++;
	if (str[iter] == '+')
		iter++;
	else if (str[iter] == '-')
	{
		sign = -1;
		iter++;
	}
	while (str[iter] != '\0' && str[iter] >= 48 && str[iter] <= 58)
	{
		result *= 10;
		result += str[iter] - '0';
		iter++;
	}
	return (result * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "     876hgh";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	
	return (0);
}*/
