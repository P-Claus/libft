/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:48:54 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/02 22:39:46 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while ((*lst) != NULL)
	{
		if ((*lst)->next == NULL)
		{
			new->next = *lst;
			*lst = new;
			return;
		}
		lst = &(*lst)->next;
	}
}

#include <stdio.h>
int	main(void)
{
	int	value1 = 42;
	int	value2 = 19;
	int	value3 = 1;

	t_list *new1 = ft_lstnew(&value1);
	t_list *new2 = ft_lstnew(&value2);
	t_list *new3 = ft_lstnew(&value3);
	new1->next = new2;

	t_list *current = new1;  // Start with the head of the list

    while (current != NULL) {
        printf("Node content: %d\n", *(int *)current->content);
        current = current->next;
    }

    printf("Now we run the ft_lstadd_back function...\n");


    ft_lstadd_back(&new1, new3);
	t_list *ncurrent = new1;  // Start with the head of the list
while (ncurrent != NULL) {
        printf("Node content: %d\n", *(int *)ncurrent->content);
        ncurrent = ncurrent->next;
    }


	free(new1);
	free(new2);
	free(new3);
}
