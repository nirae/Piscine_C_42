/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 20:49:42 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/27 18:04:26 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_map(int *tab, int length, void (*f)(int))
{
	int i;
	int mytab[length];

	i = 0;
	while (i < length)
	{
		mytab[i] = f(tab[i]);
		i++;
	}
	return (mytab);
}
