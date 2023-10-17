/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:45:22 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/17 13:50:13 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  counter;
    
    counter = 0;
    while (counter < n)
        *(char *)(s + counter++) = 0;
}

#include <stdio.h>
#include<string.h>
int main(void)
{
    char src1[30] = "567:;2`$dfhjgazGHJGgdhsqjjG";
    char src2[30] = "567:;2`$dfhjgazGHJGgdhsqjjG";
    printf("Before the function: %s\n", src1);
    printf("Before the function: %s\n", src2);
    printf("-------------------------------------------------\n");
    bzero(src1 + 7, 8);
    printf("bzero: %s\n", src1);
   ft_bzero(src2 + 7, 8);
    printf("ft_bzero: %s\n", src2);
}
