/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:27:55 by pclaus            #+#    #+#             */
/*   Updated: 2023/11/02 17:38:14 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}


#include <stdio.h>
int	main(void)
{
	t_list *new1, *new2, *new3;
	new1 = ft_lstnew((void *)4);
	new2 = ft_lstnew((void *)1);
	new3 = ft_lstnew((void *)9);
	new1->next = new2;
	new2->next = new3;
	printf("First node: %p\n", (void *)new1);
	printf("Second node: %p\n", (void *)new2);
	printf("Third node: %p\n", (void *)new3);
	printf("The last node in the list is: %p\n", ft_lstlast(new1));
	free(new1);
	free(new2);
	free(new3);
}

