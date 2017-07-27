/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 11:36:22 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/18 19:57:53 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_ok(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (ft_is_ok(str[i - 1]) && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (!ft_is_ok(str[i - 1]) && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
