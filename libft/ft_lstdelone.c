/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:26:07 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/03 13:47:39 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstdelone(t_list *lst, void(*del)(void*))
{

}

void	*del(void*)
{

}

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
	new2->next = new3;
	new3->next = new4;
	new4->next = NULL;

	t_list *current = new1;  
	while (current != NULL)
	{
        	printf("Node content: %d\n", *(int *)current->content);
        	current = current->next;
    	}	

	ft_sltdelone(new3, del())

	t_list *after_function = new1;
	while (after_function != NULL)
	{
        	printf("Node content after function: %d\n", *(int *)after_function->content);
        	after_function = after_function->next;
    	}


	free(new1);
	free(new2);
	free(new3);
	free(new4);
}
