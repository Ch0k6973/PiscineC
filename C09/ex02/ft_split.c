/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamonta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:53:04 by alamonta          #+#    #+#             */
/*   Updated: 2020/09/30 10:34:15 by alamonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(char *src, int n)
{
	int		i;
	char	*copy;

	i = 0;
	if (!src)
		return (NULL);
	if (!(copy = (char *)malloc((n + 1) * sizeof(char))))
		return (NULL);
	while (i < n)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int		sep(char c, char *charset)
{
	int i;

	i = 0;
	if (c == '\0')
		return (1);
	while (charset[i])
	{
		if (c == (charset[i]))
			return (1);
		i++;
	}
	return (0);
}

int		nb_words(char *str, char *charset)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	if (!sep(str[0], charset))
		nb++;
	while (str[i])
	{
		if (!sep(str[i], charset) && sep(str[i - 1], charset))
			nb++;
		i++;
	}
	return (nb);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!(tab = (char **)malloc((nb_words(str, charset) + 1) * sizeof(char *))))
		return (NULL);
	while (str[i])
	{
		j = 0;
		while (!sep(str[i + j], charset))
			j++;
		if (j)
		{
			tab[k] = ft_strndup(&str[i], j);
			i = i + j;
			k++;
		}
		i++;
	}
	tab[k] = 0;
	return (tab);
}
