/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:01:25 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/24 16:46:36 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	long i;
	long b;

	i = 2;
	b = 1;
	if (nb <= 1)
		return (2);
	while (i * i < nb)
	{
		if (nb % i == 0)
			b = 0;
		i++;
	}
	if (b)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
	return (0);
}
