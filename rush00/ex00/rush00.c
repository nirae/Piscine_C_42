/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 22:28:57 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/08 22:40:11 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_first_last_lines(int x)
{
	int nbr_tirets;
	int i;

	ft_putchar('o');
	nbr_tirets = x - 2;
	if (nbr_tirets > 0)
	{
		i = 1;
		while (i <= nbr_tirets)
		{
			ft_putchar('-');
			i++;
		}
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_print_middle_lines(int x)
{
	int nbr_pipe;
	int i;

	ft_putchar('|');
	nbr_pipe = x - 2;
	if (nbr_pipe > 0)
	{
		i = 1;
		while (i <= nbr_pipe)
		{
			ft_putchar(' ');
			i++;
		}
	}
	if (x > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int nbr_middle_lines;
	int i;

	if (x < 2147483647 && y < 2147483647)
	{
		if (x > 0 && y > 0)
		{
			ft_print_first_last_lines(x);
			nbr_middle_lines = y - 2;
			if (nbr_middle_lines > 0)
			{
				i = 1;
				while (i <= nbr_middle_lines)
				{
					ft_print_middle_lines(x);
					i++;
				}
			}
			if (y > 1)
			{
				ft_print_first_last_lines(x);
			}
		}
	}
}
