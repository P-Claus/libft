/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:51:27 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/25 14:59:34 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
		write(fd, &s[index++], 1);
}

#include <fcntl.h>
int	main(void)
{
	char	*s = "hello my friend I am the boss!";
	int	fd = open("text.txt", O_WRONLY);
	ft_putstr_fd(s, fd);
}
