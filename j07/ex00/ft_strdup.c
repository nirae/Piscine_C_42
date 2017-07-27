/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 13:58:37 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/23 19:27:21 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		len;
	int		i;

	len = 0;
	while (src[len] != 0)
		len++;
	result = (char*)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
