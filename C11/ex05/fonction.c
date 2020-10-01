/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:01:51 by alamonta          #+#    #+#             */
/*   Updated: 2020/10/01 15:43:51 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

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

int		fatoi(char *str, int i, int atoi)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = (atoi * 10) + (str[i] - 48);
		i++;
	}
	return (atoi);
}

int		ft_atoi(char *str)
{
	int		i;
	int		moins;
	int		atoi;

	i = 0;
	moins = 0;
	atoi = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			moins++;
		i++;
	}
	atoi = fatoi(str, i, atoi);
	if (moins % 2 != 0)
		atoi = -atoi;
	return (atoi);
}
