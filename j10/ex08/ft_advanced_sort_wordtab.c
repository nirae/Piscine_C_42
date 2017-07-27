/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 17:47:25 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/27 17:52:22 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		sort;
	char	*temp;

	i = 0;
	sort = 0;
	while (!sort)
	{
		i = 0;
		sort = 1;
		while (tab[i + 1])
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				sort = 0;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
	}
}
