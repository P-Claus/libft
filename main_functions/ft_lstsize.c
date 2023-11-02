/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:10:39 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/02 15:22:03 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list *new1, *new2, *new3;
	new1 = ft_lstnew((void *)4);
	new2 = ft_lstnew((void *)1);
	new3 = ft_lstnew((void *)9);
	new1->next = new2;
	new2->next = new3;
	printf("First node: %p\n", (void *)new1->content);
	printf("Second node: %p\n", (void *)new2->content);
	printf("Third node: %p\n", (void *)new3->content);
	int size = ft_lstsize(new1);
	printf("The size is: %d\n", size);
	free(new1);
	free(new2);
	free(new3);
}*/
