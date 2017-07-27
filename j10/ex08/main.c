/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 17:46:46 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/27 17:46:51 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *));
char	**ft_split_whitespaces(char *str);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int ac, char **av)
{
	int		i;
	char	**tab;

	i = 0;
	if (ac == 2)
	{
		tab = ft_split_whitespaces(av[1]);
		ft_advanced_sort_wordtab(tab, &ft_strcmp);
		while (tab[i])
		{
			printf("%s\n", tab[i]);
			i++;
		}
	}
	return (0);
}
