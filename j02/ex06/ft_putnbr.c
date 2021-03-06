/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:31:36 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/08 09:59:42 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_calcul_nb(int nb)
{
	if (nb >= 10 || nb <= -10)
	{
		ft_calcul_nb(nb / 10);
		ft_calcul_nb(nb % 10);
	}
	else if (nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putchar('0' - nb);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_calcul_nb(nb);
	}
	else
	{
		ft_calcul_nb(nb);
	}
}
