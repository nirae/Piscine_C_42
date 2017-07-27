/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 11:09:07 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/27 11:09:27 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

typedef int	(*t_function)(int, int);

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nb);
int			ft_atoi(char *str);
int			ft_add(int a, int b);
int			ft_sub(int a, int b);
int			ft_prod(int a, int b);
int			ft_div(int a, int b);
int			ft_mod(int a, int b);

t_function	g_ops[] = { ft_add, ft_sub, ft_prod, ft_div, ft_mod };

#endif
