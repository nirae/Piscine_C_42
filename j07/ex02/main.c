/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 19:36:18 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/24 14:13:29 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min,int max);

int		main(void)
{
	int *p[0];
	int  size = ft_ultimate_range(p, 7, 18);
	printf("taille : %d\n", size);
	int i = 0;
	while (i < size)
	{
		printf("%d\n", p[0][i]);
		i++;
	}
	return(0);
}
