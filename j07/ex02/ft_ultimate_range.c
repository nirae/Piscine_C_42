/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 19:18:06 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/24 19:53:43 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *mytab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	mytab = malloc(((max - min)) * sizeof(*mytab));
	if (mytab == NULL)
		return (0);
	i = 0;
	while (min + i < max)
	{
		mytab[i] = min + i;
		i++;
	}
	*range = mytab;
	return (i);
}
