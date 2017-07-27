/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:55:09 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/18 20:21:38 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int is_negative;
	int result;

	result = 0;
	i = 0;
	is_negative = 0;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v'
			|| str[i] == '\t' || str[i] == 32)
		i++;
	if (str[i] == '-')
		is_negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + result * 10;
		i++;
	}
	if (is_negative)
		return (-result);
	return (result);
}
