/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceugene <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 11:11:27 by ceugene           #+#    #+#             */
/*   Updated: 2017/07/26 10:00:14 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# define BUFF 4096

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_putstr(char *str);
void	ft_putnbr(int nb);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *src);
char	*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_addnewlu(char *dest, char *nlu);
char	**ft_split_lines(char *str);
int		ft_x(char **doubtab);
int		ft_y(char **doubtab);
int		ft_verif(char *dest, int x, int y);
int		ft_strcmp(char *s1, char *s2);
char	*ft_rush00(int x, int y, char *str);
char	*ft_rush01(int x, int y, char *str);
char	*ft_rush02(int x, int y, char *str);
char	*ft_rush03(int x, int y, char *str);
char	*ft_rush04(int x, int y, char *str);
void	ft_display00(int x, int y);
void	ft_display01(int x, int y);
void	ft_display02(int x, int y);
void	ft_display03(int x, int y);
void	ft_display04(int x, int y);
int		ft_counter(int add);
int		ft_error(void);
#endif
