/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 12:25:46 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/27 20:00:51 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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
