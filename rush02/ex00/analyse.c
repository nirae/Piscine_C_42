/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 00:18:02 by ceugene           #+#    #+#             */
/*   Updated: 2017/07/23 15:10:39 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_counter(int add)
{
	static int		count;

	count += add;
	return (count);
}

int		ft_x(char **doubtab)
{
	int		select;
	int		ligne;
	int		largeur;

	select = 0;
	largeur = 0;
	ligne = 0;
	while (doubtab[ligne][select])
		select++;
	largeur = select;
	while (doubtab[ligne])
	{
		select = 0;
		while (doubtab[ligne][select])
			select++;
		if (select != largeur)
			return (-1);
		ligne++;
	}
	return (largeur);
}

int		ft_y(char **doubtab)
{
	int		hauteur;

	hauteur = 0;
	while (doubtab[hauteur])
		hauteur++;
	return (hauteur);
}

int		ft_verif(char *dest, int x, int y)
{
	char	*rush00;
	char	*rush01;
	char	*rush02;
	char	*rush03;
	char	*rush04;

	rush00 = malloc(sizeof(char) * (y * (x + 1)));
	rush01 = malloc(sizeof(char) * (y * (x + 1)));
	rush02 = malloc(sizeof(char) * (y * (x + 1)));
	rush03 = malloc(sizeof(char) * (y * (x + 1)));
	rush04 = malloc(sizeof(char) * (y * (x + 1)));
	if (!(rush00 || rush01 || rush02 || rush03 || rush04))
		return (0);
	if (ft_strcmp(ft_rush00(x, y, rush00), dest) == 0)
		ft_display00(x, y);
	if (ft_strcmp(ft_rush01(x, y, rush01), dest) == 0)
		ft_display01(x, y);
	if (ft_strcmp(ft_rush02(x, y, rush02), dest) == 0)
		ft_display02(x, y);
	if (ft_strcmp(ft_rush03(x, y, rush03), dest) == 0)
		ft_display03(x, y);
	if (ft_strcmp(ft_rush04(x, y, rush04), dest) == 0)
		ft_display04(x, y);
	return (ft_error());
}
