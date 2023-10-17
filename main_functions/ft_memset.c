/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:31:25 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/17 13:33:40 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  counter;
    
    counter = 0;
    while (counter < len)
    {
        *(char*)(b + counter++) = c;
    }
    return (b);
}

#include <stdio.h>
#include<string.h>

int main(void)
{
    char src1[21] = "gdfhjgazGHJGgdhsqjjG";
    char src2[21] = "gdfhjgazGHJGgdhsqjjG";
    printf("Before the function (1): %s\n", src1);
    printf("Before the function (2): %s\n", src2);
    printf("-------------------------------------------------\n");
    memset(src1 + 5, 43, 3*sizeof(char));
    printf("memset: %s\n", src1);
    ft_memset(src2 + 5, '+', 3*sizeof(char));
    printf("ft_memset: %s\n", src2);
}
