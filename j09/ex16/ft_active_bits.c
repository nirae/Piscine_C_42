/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:44:11 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/14 15:44:44 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int i;
	int power;

	i = 2;
	power = 0;
	if (value < 0)
		value = -value;
	if (value == 0)
		return (1);
	else
	{
		while (i <= value)
		{
			i = i * 2;
			power++;
		}
		power++;
	}
	return (power);
}
