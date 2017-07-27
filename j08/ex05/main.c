/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 19:05:40 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/23 23:08:05 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

int					main(int argc, char **argv)
{
	struct s_stock_par *tab;

	if (argc > 0)
	{
		tab = ft_param_to_tab(argc, argv);
		ft_show_tab(tab);
	}
	return (0);
}
