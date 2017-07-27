/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 11:28:55 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/16 21:16:51 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s1 == 0 && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	else if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else
		return (0);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", match(argv[1], argv[2]));
	return (0);
}
