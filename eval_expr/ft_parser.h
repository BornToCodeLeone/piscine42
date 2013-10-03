/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 21:51:56 by lverniss          #+#    #+#             */
/*   Updated: 2013/10/03 21:51:57 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSER_H
# define FT_PARSER_H
# include <stdlib.h>
# include "ft_strlen.h"

char	*ft_strncpy(char *dest, const char *src, int n);
char	*ft_strcut(char *dest, const char *src, int begin, int end);
int		ft_check_unused_p(char *str);
char	*ft_before_exp(const char *str, int pos);
char	*ft_after_exp(char *str, int pos);

#endif
