/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 09:03:28 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/14 13:10:50 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tmp1;
	int tmp2;
	int tmp3;

	tmp1 = *******c;
	*******c = ***a;
	tmp2 = ****d;
	****d = tmp1;
	tmp3 = *b;
	*b = tmp2;
	***a = tmp3;
}