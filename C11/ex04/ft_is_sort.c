/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 20:03:57 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/30 16:24:50 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < length)
	{
		j = i;
		while (j < length)
		{
			if (0 < f(tab[i], tab[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
