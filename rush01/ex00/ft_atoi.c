/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 13:37:42 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/15 13:37:52 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_negative_or_positive(char *str, int *ptr_is_negative, int i)
{
	if (*(str + i) == '-' && *ptr_is_negative == 0)
	{
		if (*(str + (i + 1)) >= '0' && *(str + (i + 1)) <= '9')
		{
			*ptr_is_negative = 1;
			i++;
		}
	}
	else if (*(str + i) == '+')
	{
		if (*(str + (i + 1)) >= '0' && *(str + (i + 1)) <= '9')
			i++;
	}
	return (i);
}

void	ft_calc_nbr(char *str, int *ptrnbr, int *ptr_is_negative)
{
	int		i;
	char	a;

	i = 0;
	while (*(str + i) != '\0')
	{
		i = ft_negative_or_positive(str, ptr_is_negative, i);
		a = *(str + i);
		if (a > 32)
		{
			if (a >= '0' && a <= '9')
			{
				*ptrnbr = (*ptrnbr * 10) + (a - '0');
				i++;
			}
			else
				break ;
		}
		else
			i++;
	}
}

int		ft_atoi(char *str)
{
	int is_negative;
	int nbr;
	int *ptrnbr;
	int *ptr_is_negative;

	nbr = 0;
	is_negative = 0;
	ptrnbr = &nbr;
	ptr_is_negative = &is_negative;
	ft_calc_nbr(str, ptrnbr, ptr_is_negative);
	if (is_negative == 1)
		return (-nbr);
	else
		return (nbr);
}
