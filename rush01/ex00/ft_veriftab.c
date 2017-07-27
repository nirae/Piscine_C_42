/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veriftab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 14:38:37 by cmace             #+#    #+#             */
/*   Updated: 2017/07/16 19:34:51 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printerror();
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putchar(char c); 
int		ft_strlen(char *str);

int		ft_veriftab(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '1' || str[i] > '9')
		{
			if(str[i] != '.')
				return (0);
		}
		i++;
	}
	return (1);
}
/*
int		ft_veriftsudo(int argc, char **str)
{
	int i;
	int y;                    ###########################
	int c;                    # Ne fonctionne pas car   #
	char laverif;             # perte de donnee a cause #
                              # du fdp qui m'a shutdown #
	i = 0;                    ###########################
	y = 0;
	c = 0;
	ft_putnbr(argc);
	while (i < argc)
	{
		ft_putstr("bwaaa\n");
		laverif = str [i][c];
		ft_putchar(str[i][c]);
		ft_putchar(laverif);
		while (str[i][y] != '\n')
		{
			if(laverif == str[i][y] && y != c)
			{
				if (str[i][y] != '.')
				{
					ft_putstr("rip nous\n");
					return (0);
				}
			}
			i++;
			y++;
		}
		y = 0;
	}
	return 1;
}*/

int		ft_verification_params(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 10)
	{
		while (i < 10)
		{
			if (ft_strlen(argv[i]) != 9)
				return (0);
			if (ft_veriftab(argv[i]) == 0)
				return (0);
			i++;
			if (ft_veriftsudo(argc, argv) == 0)
				return (0);
		}
	}
	else
		return (0);
	return (1);
}
