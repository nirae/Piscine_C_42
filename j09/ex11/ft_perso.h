/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 13:12:03 by ndubouil          #+#    #+#             */
/*   Updated: 2017/07/14 13:24:10 by ndubouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

fndef FT_PERSO_H
# define FT_PERSO_H
# include <string.h>
typedef enum e_job  t_job;
typedef struct s_perso  t_perso;
enum        e_job
{
    SAVE_THE_WORLD
};
struct      s_perso
{
    char        *name;
    float       life;
    int         age;
    t_job       profession;
};
#endif
