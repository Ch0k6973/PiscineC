/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:31:29 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/25 15:26:31 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(int i)
{
	char c;

	c = i + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int n;

	n = 0;
	if (nb == -2147483648)
	{
		write(1, "-214748364", 10);
		nb = 8;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 10)
	{
		putchar(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		putchar(nb % 10);
	}
}
