/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 08:30:07 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/22 16:16:07 by alamonta         ###   ########.fr       */
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
