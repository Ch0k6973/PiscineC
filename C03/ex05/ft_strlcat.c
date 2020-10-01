/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:27:58 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/23 15:54:54 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	while (dest[j])
		j++;
	if (size < j)
		return (i + size);
	i = 0;
	while (src[i] && j + i < size - 1)
	{
		dest[i + j] = src[i];
		i++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (j + i);
}
