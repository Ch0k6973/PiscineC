/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 11:01:54 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/11 15:45:10 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int a;
	int b;
	int e;

	e = 0;
	while (e != size)
	{
		i = 0;
		a = tab[i];
		i++;
		while (i != size)
		{
			b = tab[i];
			a = tab[i - 1];
			if (b < a)
			{
				tab[i] = a;
				tab[i - 1] = b;
				e = 0;
			}
			i++;
		}
		e++;
	}
}
