/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 10:07:34 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/23 23:06:17 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int						ft_setcopy(char *src, struct s_stock_par a)
{
	int len;
	int i;

	len = ft_strlen(src);
	a.copy = (char*)malloc((len + 1) * sizeof(char));
	if (a.copy == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		a.copy[i] = src[i];
		i++;
	}
	a.copy[i] = 0;
	return (0);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_par	tmp;
	struct s_stock_par	*mytab;

	mytab = (struct s_stock_par*)malloc((ac + 1) * sizeof(struct s_stock_par));
	i = 0;
	while (i < ac)
	{
		tmp.size_param = ft_strlen(av[i]);
		tmp.str = av[i];
		ft_setcopy(av[i], tmp);
		tmp.tab = ft_split_whitespaces(av[i]);
		mytab[i] = tmp;
		i++;
	}
	mytab[i].str = 0;
	return (mytab);
}
