/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:08:02 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/13 12:45:31 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int a;

	i = 2;
	a = nb / 2;
	if (nb <= 1)
		return (0);
	while (i <= a && nb < 2147483647)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (nb > 2)
	{
		if (nb % 2 != 0 && nb % 3 != 0)
		{
			if (ft_is_prime(nb))
				return (nb);
		}
		nb+= 2;
	}
	return (0);
}
