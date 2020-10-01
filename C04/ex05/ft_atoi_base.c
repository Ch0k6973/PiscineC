/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 10:42:34 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/23 15:11:24 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base)
{
	int i;
	int j;

	if (!base || !base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i + 1])
	{
		j = (i + 1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	i = -1;
	while (base[i++])
	{
		if (base[i] == '-' || base[i] == '+' || (base[i] >= 9 && base[i] <= 13)
				|| base[i] == ' ')
			return (0);
	}
	return (j);
}

int		conv(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		size;
	int		i;
	int		moins;
	int		atoi;

	i = 0;
	moins = 0;
	atoi = 0;
	if (!(size = check_base(base)))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			moins++;
		i++;
	}
	i--;
	while (str[i++] && conv(str[i], base) >= 0)
		atoi = atoi * size + conv(str[i], base);
	if (moins % 2 != 0)
		atoi = -atoi;
	return (atoi);
}
