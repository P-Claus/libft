/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:27:10 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/18 14:27:25 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c +=32;
	return (c);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 1
#define NUM_STRINGS 5

int main()
{
    srand(time(NULL));
    char    c;
    for (int loop = 0; loop < NUM_STRINGS; ++loop)
    {
        c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvw,?;.:/=$"[rand() % 60];
        printf("-------------------------------------------------\n");
        printf("RANDOM CHARACTER %d: %d\n", loop + 1, c);    
        printf("ft_tolower: %d\n", ft_tolower(c));
	printf("tolower: %d\n", tolower(c));
        printf("-------------------------------------------------\n");
        printf("\n\n\n\n\n");
        
    }

    return 0;
}
