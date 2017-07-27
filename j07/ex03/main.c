/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 19:40:36 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/23 19:42:03 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%s", ft_concat_params(argc, argv));
	}
	return (0);
}
