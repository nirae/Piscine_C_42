/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:38:24 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/23 20:34:50 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

char	**ft_split_whitespaces(char *str);

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
