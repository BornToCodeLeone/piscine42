/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/27 15:19:27 by lverniss          #+#    #+#             */
/*   Updated: 2013/09/27 23:21:16 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_LIST_H__
# define __FT_LIST_H__

#include <stdlib.h>

typedef struct s_list t_list;

struct s_list {
	void 			*data;
	s_list 			*next;
};							t_list;

#endif
