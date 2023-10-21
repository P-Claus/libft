/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:37:56 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/21 18:19:37 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*ptr;
	size_t	counter;
	size_t	total_size;

	counter = 0;
	total_size = num_elements * element_size;
	if (num_elements != 0 && element_size != 0 && total_size / num_elements != element_size)
		return (0);
	ptr = malloc(total_size);
	if (ptr == 0)
		return (0);
	while (counter < total_size)
	{
		((char *) ptr)[counter] = 0;
		counter++;
	}	
	return (ptr);

}

#include <stdio.h>

int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    int *array = (int *)ft_calloc(num_elements, element_size);

    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (size_t i = 0; i < num_elements; i++) {
        array[i] = i * 10; // Assign values to the elements
    }

    printf("Array contents:\n");
    for (size_t i = 0; i < num_elements; i++) {
        printf("array[%zu] = %d\n", i, array[i]);
    }

    free(array);

    return 0;
}

