/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 11:03:03 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/27 18:06:22 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int i;
	int n;
	int p;

	p = 0;
	n = 0;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) == 0)
			i++;
		if (f(tab[i], tab[i + 1]) < 0)
			n++;
		else if (f(tab[i], tab[i + 1]) > 0)
			p++;
		i++;
	}
	if (n == 0 || p == 0)
		return (1);
	else
		return (0);
}
