/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:02:09 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/23 19:35:28 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;
	int i;

	result = NULL;
	if (min >= max)
		return (result);
	result = (int*)malloc(((max - min) + 1) * sizeof(int));
	if (result == NULL)
		return (0);
	i = 0;
	while (min + i < max)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
