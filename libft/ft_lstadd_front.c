/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:00:45 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/02 10:47:10 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	
	
		
}
*/
#include <stdio.h>
int	main(void)
{
	t_list *new1, *new2;
	new1 = ft_lstnew((void *)4);
	new2 = ft_lstnew((void *)1);
	new1->next = new2;
	printf("First node: %p\n", (void *)new1->content);
	printf("Second node: %p\n", (void *)new2->content);
	free(new1);
	free(new2);
}
