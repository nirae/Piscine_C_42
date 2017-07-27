/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 18:27:24 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/16 19:35:51 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		nmatch(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s1 == 0 && *s2 == '*')
		return (nmatch(s1, s2 + 1));
	else if (*s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	else if (*s1 == *s2)
		return (nmatch(s1 + 1, s2 + 1));
	else
		return (0);
}
