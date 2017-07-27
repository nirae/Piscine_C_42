/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:09:58 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/09 18:57:45 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb >= 10 || nb <= -10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
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

void	ft_print_complete_line(int a, int b)
{
	if (a < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(a);
	ft_putchar(' ');
	if (b < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr(b);
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while ((a <= 98) && (b <= 99))
	{
		ft_print_complete_line(a, b);
		if (b == 99)
		{
			a++;
			b = a + 1;
		}
		else
		{
			b++;
		}
	}
}
