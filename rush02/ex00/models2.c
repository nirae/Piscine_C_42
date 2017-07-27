/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   models2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 23:47:15 by ceugene           #+#    #+#             */
/*   Updated: 2017/07/23 14:56:20 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_rush03(int x, int y, char *str)
{
	int		ncolum;
	int		nlin;
	int		select;

	select = 0;
	nlin = 0;
	while (nlin++ < y)
	{
		ncolum = 0;
		while (ncolum++ < x)
		{
			if ((ncolum == 1 && nlin == 1) || (ncolum == 1 && nlin == y))
				str[select++] = 'A';
			else if ((ncolum == x && nlin == 1) || (ncolum == x && nlin == y))
				str[select++] = 'C';
			else if (nlin == 1 || nlin == y || ncolum == 1 || ncolum == x)
				str[select++] = 'B';
			else
				str[select++] = ' ';
		}
		str[select++] = '\n';
	}
	str[(x + 1) * y] = '\0';
	return (str);
}

char	*ft_rush04(int x, int y, char *str)
{
	int		ncolum;
	int		nlin;
	int		select;

	select = 0;
	nlin = 0;
	while (nlin++ < y)
	{
		ncolum = 0;
		while (ncolum++ < x)
		{
			if ((ncolum == 1 && nlin == 1) || ((ncolum == x && nlin == y)
					&& (x > 1 && y > 1)))
				str[select++] = 'A';
			else if ((ncolum == 1 && nlin == y) || (ncolum == x && nlin == 1))
				str[select++] = 'C';
			else if (nlin == 1 || nlin == y || ncolum == 1 || ncolum == x)
				str[select++] = 'B';
			else
				str[select++] = ' ';
		}
		str[select++] = '\n';
	}
	str[(x + 1) * y] = '\0';
	return (str);
}
