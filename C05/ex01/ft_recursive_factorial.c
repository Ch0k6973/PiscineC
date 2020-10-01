/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:19:18 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/21 15:02:06 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	if (nb == 2)
		return (2);
	if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
