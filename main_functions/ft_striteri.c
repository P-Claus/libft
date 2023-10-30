/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:58:46 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/30 21:18:55 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	index;
	int	len;

	index = 0;
	len = ft_strlen(s);
	while (index < len)
	{
		f(index, &s[index]);
		index++;
	}
}

#include <stdio.h>
void print_char_index(unsigned int index, char *c)
{
    printf("Index: %d, Character: %s\n", index, c);
}


int main() {
    char myString[] = "Hello, World!";
    
    // Call ft_striteri with print_char_index function
    ft_striteri(myString, print_char_index);
    
    return 0;
}
