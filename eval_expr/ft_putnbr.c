/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 21:52:52 by lverniss          #+#    #+#             */
/*   Updated: 2013/10/03 21:52:54 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"

void	ft_putnbr(int nb)
{
	int		number;
	int		negative;

	negative = 0;
	if (nb < 0)
	{
		nb = (nb + 1) * -1;
		if (nb != 2147483647)
			nb++;
		ft_putchar('-');
		negative = (nb != 2147483647) ? 0 : 1;
	}
	if (nb >= 10)
	{
		number = nb / 10;
		ft_putnbr(number);
		if (negative == 0)
			ft_putchar('0' + nb % 10);
		else
			ft_putchar('1' + nb % 10);
	}
	else
	{
		ft_putchar('0' + nb);
	}
}
