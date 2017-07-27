/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 10:59:51 by ceugene           #+#    #+#             */
/*   Updated: 2017/07/23 13:19:23 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putstr(char *str)
{
	int		select;

	select = 0;
	while (str[select] != '\0')
	{
		ft_putchar(str[select]);
		select++;
	}
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int		select;
	int		cpy;

	select = 0;
	cpy = 0;
	while (dest[select] != '\0')
		select++;
	while (src[cpy])
	{
		dest[select] = src[cpy];
		cpy++;
		select++;
	}
	dest[select] = '\0';
	return (dest);
}

int		ft_strlen(char *src)
{
	int		end;

	end = 0;
	while (src[end])
		end++;
	return (end);
}

char	*ft_strdup(char *src)
{
	int		end;
	char	*dest;
	int		select;

	select = 0;
	end = ft_strlen(src);
	dest = malloc((sizeof(char) * end) + 1);
	if (!dest)
		return (0);
	while (src[select])
	{
		dest[select] = src[select];
		select++;
	}
	dest[select] = '\0';
	return (dest);
}
