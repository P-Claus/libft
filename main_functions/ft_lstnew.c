/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:18:20 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/02 22:27:11 by pclaus           ###   ########.fr       */
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
/*
#include <stdio.h>
int main() {
	int value1 = 42;
    	int value2 = 19;
	
    t_list *node1 = ft_lstnew(&value1);
    t_list *node2 = ft_lstnew(&value2);

    // Check if the nodes were created successfully and print their values
    if (node1) {
        printf("Node 1 content: %d\n", *(int *)node1->content);
        free(node1); // Don't forget to free the memory when done
    } else {
        printf("Failed to create Node 1\n");
    }

    if (node2) {
        printf("Node 2 content: %d\n", *(int *)node2->content);
        free(node2);
    } else {
        printf("Failed to create Node 2\n");
    }

    return 0;
}*/
