/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 21:51:21 by lverniss          #+#    #+#             */
/*   Updated: 2013/10/03 21:51:26 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPP_H
# define FT_OPP_H
# include "ft_operation.h"

typedef struct		s_opp
{
	char			sym;
	int				(*f)(int, int);
}					t_opp;

t_opp	opp[] =
{
	{'-', &ft_sub},
	{'+', &ft_add},
	{'*', &ft_mul},
	{'/', &ft_div},
	{'%', &ft_mod}
};

#endif
