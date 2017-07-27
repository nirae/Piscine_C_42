/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 17:51:56 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/14 12:13:59 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10 || nb <= -10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb >= 0)
		ft_putchar(nb + '0');
	else
		ft_putchar('0' - nb);
}

void	ft_print_am_or_pm(int hour)
{
	if (hour > 11)
		write(1, "P.M.", 4);
	else
		write(1, "A.M.", 4);
}

int		ft_convert(int hour)
{
	if (hour == 0)
		hour = 12;
	else if (hour > 12)
		hour -= 12;
	return (hour);
}

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour < 24)
	{
		write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
		ft_putnbr(ft_convert(hour));
		write(1, ".00 ", 4);
		ft_print_am_or_pm(hour);
		write(1, " AND ", 5);
		ft_putnbr(ft_convert(hour + 1));
		write(1, ".00 ", 4);
		ft_print_am_or_pm(hour + 1);
		ft_putchar('\n');
	}
}
