/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 12:07:41 by alamonta          #+#    #+#             */
/*   Updated: 2020/10/01 15:44:43 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int	check_error(char *op, int nb)
{
	if (nb == 0 && (ft_strcmp(op, "%") == 0))
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	else if (nb == 0 && (ft_strcmp(op, "/") == 0))
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int nb1;
	int nb2;

	if (ac != 4)
		return (0);
	nb1 = ft_atoi(av[1]);
	nb2 = ft_atoi(av[3]);
	if (!(check_error(av[2], nb2)))
		return (0);
	if (ft_strcmp(av[2], "+") == 0)
		ft_putnbr(nb1 + nb2);
	else if (ft_strcmp(av[2], "-") == 0)
		ft_putnbr(nb1 - nb2);
	else if (ft_strcmp(av[2], "*") == 0)
		ft_putnbr(nb1 * nb2);
	else if (ft_strcmp(av[2], "/") == 0)
		ft_putnbr(nb1 / nb2);
	else if (ft_strcmp(av[2], "%") == 0)
		ft_putnbr(nb1 % nb2);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
