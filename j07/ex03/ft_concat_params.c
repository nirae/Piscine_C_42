/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 08:56:19 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/24 16:16:39 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = 0;
	return (dest);
}

int		count_len(int argc, char **argv)
{
	int i;
	int j;
	int len;

	len = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
			j++;
		len += j;
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		len;
	int		i;

	len = count_len(argc, argv);
	if (!(result = malloc(len * sizeof(*result))))
		return (0);
	i = 1;
	while (i < argc)
	{
		ft_strcat(result, argv[i]);
		if (i != argc - 1)
			ft_strcat(result, "\n");
		i++;
	}
	return (result);
}
