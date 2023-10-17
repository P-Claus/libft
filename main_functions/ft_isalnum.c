/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:34:23 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/17 12:38:17 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 1
#define NUM_STRINGS 20

int main(void)
{
	srand(time(NULL));
	char	c;
	for (int loop = 0; loop < NUM_STRINGS; ++loop)
	{
		c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvw\
			,?;.:/=$0123456789"[rand() % 70];
		printf("-------------------------------------------------\n");
		printf("RANDOM CHARACTER %d: %d\n", loop + 1, c);
		printf("ft_isalnum: %d\n", ft_isalnum(c));
		printf("isalnum: %d\n", isalnum(c));
		printf("-------------------------------------------------\n");
		printf("\n\n\n\n\n");    
    }
    return 0;

}
*/
