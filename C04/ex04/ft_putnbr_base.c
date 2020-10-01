/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 09:57:22 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/23 10:42:12 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nbr, char *base)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	write(1, &base[nbr], 1);
}

int		check_base(char *base)
{
	int i;
	int j;

	if (!base || !base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i + 1])
	{
		j = (i + 1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (j);
}

void	body(long nbr, char *base, int size)
{
	if (nbr > -size && nbr < size)
		ft_putchar(nbr, base);
	else if (nbr > 0)
	{
		body(nbr / size, base, size);
		body(nbr % size, base, size);
	}
	else
	{
		write(1, "-", 1);
		body(-nbr, base, size);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	if ((size = check_base(base)))
		body(nbr, base, size);
}
