/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 14:03:09 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/19 09:44:03 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_ok(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
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
