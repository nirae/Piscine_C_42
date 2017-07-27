/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:47:52 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/18 20:14:50 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_ok(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
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
