/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:48:54 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/03 11:36:54 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*current;

	current = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}
/*
#include <stdio.h>
int	main(void)
{
	int	value1 = 46;
	int	value2 = 79;
	int	value3 = 18;
	int	value4 = 65;

	t_list *new1 = ft_lstnew(&value1);
	t_list *new2 = ft_lstnew(&value2);
	t_list *new3 = ft_lstnew(&value3);
	t_list *new4 = ft_lstnew(&value4);
	new1->next = new2;

	t_list *current = new1;  
	while (current != NULL)
	{
        	printf("Node content: %d\n", *(int *)current->content);
        	current = current->next;
    	}

    	printf("Now we run the ft_lstadd_back function...\n");
	ft_lstadd_back(&new1, new3);
	ft_lstadd_back(&new1, new4);
	
	t_list *ncurrent = new1;
	while (ncurrent != NULL)
	{
        	printf("Node content: %d\n", *(int *)ncurrent->content);
        	ncurrent = ncurrent->next;
 	}


	free(new1);
	free(new2);
	free(new3);
	free(new4);
}*/
