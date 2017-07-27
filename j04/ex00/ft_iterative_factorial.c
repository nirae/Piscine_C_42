/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 23:29:15 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/15 20:47:56 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb > 1 && nb < 13)
	{
		while (nb >= 1)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	else if (nb < 0 || nb > 12)
		return (0);
	else
		return (1);
}
