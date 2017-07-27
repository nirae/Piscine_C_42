/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 19:47:45 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/23 19:50:19 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[i][j] != 0)
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_words_tables(ft_split_whitespaces(argv[1]));
	return (0);
}
