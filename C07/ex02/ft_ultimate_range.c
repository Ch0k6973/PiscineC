/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:40:17 by alamonta          #+#    #+#             */
/*   Updated: 2020/10/01 11:26:50 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	if (!(*range = malloc((max - min) * sizeof(int))))
		return (-1);
	i = 0;
	while (min < max)
	{
		*range[i] = min;
		min++;
		i++;
	}
	return (max - min);
}
