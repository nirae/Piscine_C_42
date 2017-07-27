/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 10:59:51 by ceugene           #+#    #+#             */
/*   Updated: 2017/07/23 23:22:59 by ceugene          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strcpy(char *dest, char *src)
{
	int		select;

	select = 0;
	while (src[select])
	{
		dest[select] = src[select];
		select++;
	}
	while (dest[select])
	{
		dest[select] = '\0';
		select++;
	}
	return (dest);
}

char	*ft_addnewlu(char *dest, char *nlu)
{
	char	*tampon;

	tampon = ft_strdup(dest);
	if (ft_strlen(dest) != 0)
		free(dest);
	if (!(dest = malloc(sizeof(char) * ft_strlen(tampon) + ft_strlen(nlu) + 1)))
		return (0);
	dest = ft_strcpy(dest, tampon);
	free(tampon);
	dest = ft_strcat(dest, nlu);
	return (dest);
}

int		main(void)
{
	int		reading;
	char	*lu;
	char	*dest;
	char	**doubtab;

	if (!(lu = malloc(sizeof(char) * BUFF)))
		return (0);
	while ((reading = read(0, lu, BUFF)) > 0)
	{
		lu[reading] = '\0';
		if (!dest)
			dest = ft_strdup(lu);
		else
			dest = ft_addnewlu(dest, lu);
	}
	if (ft_strlen(lu) <= 1)
		return (ft_error());
	doubtab = ft_split_lines(dest);
	if (ft_x(doubtab) < 0)
		return (ft_putstr("aucune\n"));
	ft_verif(dest, ft_x(doubtab), ft_y(doubtab));
	free(doubtab);
	free(dest);
	return (0);
}
