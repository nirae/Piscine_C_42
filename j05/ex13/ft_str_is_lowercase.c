/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:45:07 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/18 20:13:23 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_ok(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (!ft_is_ok(str[i]))
			return (0);
		i++;
	}
	return (1);
}
