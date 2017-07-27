/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 18:20:49 by ceugene           #+#    #+#             */
/*   Updated: 2017/07/23 10:19:13 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strcmp(char *s1, char *s2)
{
	int		select;

	select = 0;
	while (s1[select] == s2[select] && s1[select] != '\0')
		select++;
	return (s1[select] - s2[select]);
}

int		ft_compte_lignes(char *str)
{
	int		select;
	int		lignes;
	int		levier;

	select = 0;
	lignes = 0;
	while (str[select] != '\0')
	{
		levier = 0;
		while (str[select] == '\n')
			select++;
		while (str[select] != '\n' && str[select] != '\0')
		{
			if (levier == 0)
				lignes++;
			levier = 1;
			select++;
		}
	}
	return (lignes);
}

char	**ft_remplisseur(char **tab, char *str, int lignes)
{
	int		select;
	int		select2;
	int		select3;

	select = 0;
	select3 = 0;
	while (select3 < lignes)
	{
		select2 = 0;
		while (str[select] == '\n')
			select++;
		while (str[select] != '\n' && str[select] != '\0')
		{
			tab[select3][select2] = str[select];
			select++;
			select2++;
		}
		tab[select3][select2] = '\0';
		select3++;
	}
	tab[select3] = 0;
	return (tab);
}

char	**ft_split_lines(char *str)
{
	char	**tab;
	int		select;
	int		select2;
	int		lignes;

	select = 0;
	select2 = 0;
	if (!(tab = malloc(sizeof(char *) * ft_compte_lignes(str) + 1)))
		return (0);
	while (str[select])
	{
		lignes = 0;
		while (str[select] == '\n')
			select++;
		while (str[select] != '\n' && str[select] != '\0')
		{
			lignes++;
			select++;
		}
		if (!(tab[select2] = malloc(sizeof(int) * lignes + 1)))
			return (0);
		select2++;
	}
	return (ft_remplisseur(tab, str, ft_compte_lignes(str)));
}

void	ft_putnbr(int nb)
{
	int		tampon;
	int		value;
	int		count;

	tampon = nb;
	count = 1;
	while ((nb = nb / 10) > 0)
		count = count * 10;
	while (count > 0)
	{
		value = (tampon / count) % 10;
		ft_putchar(value + '0');
		count = count / 10;
	}
}
