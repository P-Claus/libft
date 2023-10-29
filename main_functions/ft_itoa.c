/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:31:38 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/29 22:20:22 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*itoa_neg(char *s, int n, int last_index, int amount_of_digits)
{
	while (last_index > 0)
	{
		if (n < 0)
		{
			s[0] = '-';
			n = -n;
		}
		if (n < 10)
			s[last_index--] = n + '0';
		else
		{
			s[last_index--] = (n % 10) + '0';
			n /= 10;
		}
	}
	s[amount_of_digits] = '\0';
	return (s);
}

static char	*itoa_pos(char *s, int n, int last_index, int amount_of_digits)
{
	while (last_index >= 0)
	{
		if (n < 0)
		{
			s[0] = '-';
			n = -n;
		}
		if (n < 10)
			s[last_index--] = n + '0';
		else
		{
			s[last_index--] = (n % 10) + '0';
			n /= 10;
		}
	}
	s[amount_of_digits] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	int		amount_of_digits;
	int		iter;
	int		last_index;
	char	*s;

	amount_of_digits = count_digits(n);
	iter = 0;
	last_index = amount_of_digits - 1;
	s = (char *) malloc((amount_of_digits + 1) * sizeof(char));
	if (n == 0)
		s[iter++] = n + '0';
	if (n < 0)
		s = itoa_neg(s, n, last_index, amount_of_digits);
	if (n > 0)
		s = itoa_pos(s, n, last_index, amount_of_digits);
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("The string is: %s\n", ft_itoa(-8789));	
	printf("The string is: %s\n", ft_itoa(0));	
	printf("The string is: %s\n", ft_itoa(-1));	
	printf("The string is: %s\n", ft_itoa(1));	
	printf("The string is: %s\n", ft_itoa(67896));	
	printf("The string is: %s\n", ft_itoa(-987560));	
	printf("The string is: %s\n", ft_itoa(89));	
}*/
