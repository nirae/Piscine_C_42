/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 15:32:42 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/23 19:51:49 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_ok(char c)
{
	if (c != ' ' && c != '\t' && c != '\n' && c != 0)
		return (1);
	return (0);
}

int		ft_words(char *str)
{
	if (*str == 0)
		return (0);
	else if (ft_is_ok(*str) && !ft_is_ok(*(str + 1)))
		return (1 + ft_words(str + 1));
	return (0 + ft_words(str + 1));
}

int		ft_skip(char *str, int i)
{
	while (!ft_is_ok(str[i]))
		i++;
	return (i);
}

int		ft_letters(char *str, int i)
{
	if (ft_is_ok(str[i]))
		return (1 + ft_letters(str, i + 1));
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		k;
	int		nb_words;

	nb_words = ft_words(str);
	if (!(tab = (char**)malloc((nb_words + 1) * sizeof(*tab))))
		return (NULL);
	i = 0;
	j = 0;
	while (j < nb_words)
	{
		k = 0;
		if (!(tab[j] = (char*)malloc((ft_letters(str, i) + 1) * sizeof(tab))))
			return (NULL);
		i = ft_skip(str, i);
		while (ft_is_ok(str[i]))
			tab[j][k++] = str[i++];
		tab[j++][k] = 0;
	}
	tab[j] = 0;
	return (tab);
}
