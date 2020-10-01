/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 15:54:33 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/17 10:32:31 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fatoi(char *str, int i, int atoi)
{
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = (atoi * 10) + (str[i] - 48);
		i++;
	}
	return (atoi);
}

int	ft_atoi(char *str)
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
