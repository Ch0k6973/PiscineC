/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 12:14:20 by alamonta          #+#    #+#             */
/*   Updated: 2020/10/01 11:28:23 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	int			len;
	char		*res;

	i = 0;
	len = 0;
	if (!(res = malloc((len++ + ((size - 1) * ft_strlen(sep))) * sizeof(char))))
		return (NULL);
	if (size < 1)
		return (res);
	while (i++ < size - 1)
		len = len + ft_strlen(strs[i]);
	i = 0;
	while (i++ < size - 1)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
	}
	return (res);
}
