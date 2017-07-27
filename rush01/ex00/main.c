/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 11:15:23 by cmace             #+#    #+#             */
/*   Updated: 2017/07/16 18:59:03 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_printerror();
int		ft_strlen(char *str);
int		ft_veriftab(char *str);
int		ft_verification_params(int argc, char **argv);

int main(int argc, char **argv)
{
	if (ft_verification_params(argc, argv) == 0)
	{
		ft_printerror();
		return (0);
	}
	else
	{
		 
		/* ############################### *
		 * #                             # *
		 * # Inserer vos fonctions ici ! # *
		 * #                             # *
		 * ############################### */
	}
	return (0);
}
