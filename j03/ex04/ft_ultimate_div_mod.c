/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:06:48 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/11 21:06:54 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp_div;
	int tmp_mod;

	if (*b != 0)
	{
		tmp_div = *a / *b;
		tmp_mod = *a % *b;
		*a = tmp_div;
		*b = tmp_mod;
	}
}
