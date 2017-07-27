/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:09:45 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/27 16:11:53 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_print_error(char op, int nb)
{
	if (nb == 0)
	{
		if (op == '/')
		{
			ft_putstr("Stop : division by zero\n");
			return (1);
		}
		if (op == '%')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (1);
		}
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		i;
	char	*op;

	i = 0;
	op = "+-*/%\0";
	if (ac != 4)
		return (0);
	if (ft_print_error(av[2][0], ft_atoi(av[3])))
		return (0);
	while (op[i])
	{
		if (op[i] == av[2][0])
		{
			ft_putnbr(g_ops[i](ft_atoi(av[1]), ft_atoi(av[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
