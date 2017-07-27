/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 10:13:49 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/24 17:06:27 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int		main(int ac, char **dc)
{
	int a;
	int b;

	a = atoi(dc[1]);
	b = atoi(dc[2]);
	if (ac >= 3)
		rush(a, b);
	else
		return (0);
	return (0);
}
