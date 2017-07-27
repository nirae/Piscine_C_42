/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 12:26:42 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/27 17:39:58 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_wordtab(char **tab);
char	**ft_split_whitespaces(char *str);

int	main(int ac, char **av)
{
	char	**tab;
	int		i;

	i = 0;
	if (ac == 2)
	{
		tab = ft_split_whitespaces(av[1]);
		ft_sort_wordtab(tab);
		while (tab[i])
		{
			printf("%s\n", tab[i]);
			i++;
		}
	}
	return (0);
}
