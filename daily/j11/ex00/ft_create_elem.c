/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/27 15:24:44 by lverniss          #+#    #+#             */
/*   Updated: 2013/09/27 23:07:59 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*result;

	if (!(returned_value = malloc(sizeof(*result))))
		return (0);
	result->data = data;
	result->next = 0;
	return (returned_value);
}
