/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:18:20 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/02 09:33:58 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node)
	{
		node->content = content;
		node->next = NULL;
	}
	return (node);
}

#include <stdio.h>
int main() {
    int data = 42;
    t_list *node = ft_lstnew(&data);

    if (node) {
        printf("Created a new node with content: %d\n", *(int *)node->content);
        free(node); 
    } else {
        printf("Failed to create a new node.\n");
    }

    return 0;
}


