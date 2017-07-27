/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 23:01:19 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/08 23:04:18 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_first_line(int x)
{
	int nbr_b;
	int i;

	ft_putchar('A');
	nbr_b = x - 2;
	if (nbr_b > 0)
	{
		i = 1;
		while (i <= nbr_b)
		{
			ft_putchar('B');
			i++;
		}
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_print_last_line(int x)
{
	int nbr_b;
	int i;

	ft_putchar('C');
	nbr_b = x - 2;
	if (nbr_b > 0)
	{
		i = 1;
		while (i <= nbr_b)
		{
			ft_putchar('B');
			i++;
		}
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	ft_print_middle_lines(int x)
{
	int nbr_spaces;
	int i;

	ft_putchar('B');
	nbr_spaces = x - 2;
	if (nbr_spaces > 0)
	{
		i = 1;
		while (i <= nbr_spaces)
		{
			ft_putchar(' ');
			i++;
		}
	}
	if (x > 1)
	{
		ft_putchar('B');
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
			ft_print_first_line(x);
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
				ft_print_last_line(x);
			}
		}
	}
}
