/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 22:05:52 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/14 12:50:55 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i < j || i < k) && (i > k || i > j))
		return (i);
	else if ((j > i || j > k) && (j < k || j < i))
		return (j);
	else if ((k > i || k > j) && (k < i || k < j))
		return (k);
	return (0);
}
