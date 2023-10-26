/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:58:30 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/26 21:45:10 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (nb < 10)
		ft_putchar_fd(nb + '0', fd);
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
}

int	main(void)
{
	int	c = 2147483647;
	//int	fd = open("text.txt", O_WRONLY);
	int	fd = 1;
	ft_putnbr_fd(c, fd);
	return (0);
}
