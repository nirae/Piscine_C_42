/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:00:26 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/13 11:43:27 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	if (nb > 2147395600 || nb <= 0)
		return (0);
	i = 0;
	while (i * i < nb)
	{
		i++;
	}
	if (nb % i != 0)
		return (0);
	else
		return (i);
}
