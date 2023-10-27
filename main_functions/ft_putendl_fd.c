/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:15:29 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/27 17:24:34 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
		write(fd, &s[counter++], 1);
	write (fd, "\n", 1);
}

int	main(void)
{
	char	*s = "hello my friend I am the boss!";
//	int	fd = open("text.txt", O_WRONLY);
	int	fd = 1;
	ft_putendl_fd(s, fd);
}

