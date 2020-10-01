/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 09:32:52 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/11 12:02:50 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int a;
	int b;

	i = 0;
	while (i != (size / 2))
	{
		a = tab[i];
		b = tab[(size - 1) - i];
		tab[i] = b;
		tab[(size - 1) - i] = a;
		i++;
	}
}
