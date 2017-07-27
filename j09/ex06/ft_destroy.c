/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 08:02:13 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/14 12:55:38 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (factory[i])
	{
		while (factory[i][j])
		{
			free(factory[i][j]);
			j++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
