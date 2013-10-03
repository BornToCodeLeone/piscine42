/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 21:50:06 by lverniss          #+#    #+#             */
/*   Updated: 2013/10/03 21:50:11 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H
# include <stdlib.h>
# include "ft_strlen.h"
# include "ft_converter.h"
# include "ft_parser.h"

int		ft_div_compute(const char *str, int size);
char	*ft_ignore_space(char *str);
int		ft_another_pivot(const char *str, int size, char type);
int		ft_compute(char *before, char *after, char sym);
int		eval_expr(char *str);

#endif
