/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:09:18 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/11 21:09:47 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i--;
		len++;
	}
	return (str);
}
