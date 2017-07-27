/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 10:19:23 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/08 23:10:33 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_first_last_lines(int x)
{
	int nbrs_of_b;
	int i;

	ft_putchar('A');
	nbrs_of_b = x - 2;
	if (nbrs_of_b > 0)
	{
		i = 1;
		while (i <= nbrs_of_b)
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

void	ft_print_middle_lines(int x)
{
	int nbrs_of_spaces;
	int i;

	ft_putchar('B');
	nbrs_of_spaces = x - 2;
	if (nbrs_of_spaces > 0)
	{
		i = 1;
		while (i <= nbrs_of_spaces)
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
	int nbrs_of_middle_lines;
	int i;

	if (x < 2147483647 && y < 2147483647)
	{
		if (x > 0 && y > 0)
		{
			ft_print_first_last_lines(x);
			nbrs_of_middle_lines = y - 2;
			if (nbrs_of_middle_lines > 0)
			{
				i = 1;
				while (i <= nbrs_of_middle_lines)
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
