/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <lverniss@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/25 20:20:00 by lverniss          #+#    #+#             */
/*   Updated: 2013/09/25 22:57:15 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int));

void bprint(int nb)
{
	printf("%d\n", nb);
}

int		main()
{
	int 	tab[10] = {12,14123423,234214,234213421,212312,423421,1234213,42314213,42314213,42314123};

	ft_foreach(tab, 10, bprint);

	return (0);
}
