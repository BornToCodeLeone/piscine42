/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <lverniss@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/25 20:48:33 by lverniss          #+#    #+#             */
/*   Updated: 2013/09/26 03:42:09 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int		*tab2;
	int		count;


	tab2 = malloc(length * sizeof(int));
	count = 0;

	while(count < length)
	{
		tab2[count] = f(tab[count]);
		++count;
	}
	return(tab2);
}
