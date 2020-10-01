/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 19:25:29 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/10 15:13:12 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' | b != '8' | c != '9' | d != '9')
	{
		write(1, ", ", 2);
	}
}

void	boucle(char a, char b, char c, char d)
{
	while (d <= '9')
	{
		if (a < c)
		{
			write_number(a, b, c, d);
		}
		else if (a == c)
		{
			if (b < d)
			{
				write_number(a, b, c, d);
			}
		}
		d++;
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				boucle(a, b, c, d);
				c++;
			}
			b++;
		}
		a++;
	}
}
