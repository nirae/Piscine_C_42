/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 11:36:41 by ceugene           #+#    #+#             */
/*   Updated: 2017/07/23 14:36:07 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_error(void)
{
	if (ft_counter(0) == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
	return (0);
}

void	ft_display01(int x, int y)
{
	if (ft_counter(0) > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-01] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
	ft_counter(1);
}

void	ft_display02(int x, int y)
{
	if (ft_counter(0) > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-02] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
	ft_counter(1);
}

void	ft_display03(int x, int y)
{
	if (ft_counter(0) > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-03] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
	ft_counter(1);
}

void	ft_display04(int x, int y)
{
	if (ft_counter(0) > 0)
		ft_putstr(" || ");
	ft_putstr("[colle-04] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
	ft_counter(1);
}
