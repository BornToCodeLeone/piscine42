/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/13 14:34:07 by lverniss          #+#    #+#             */
/*   Updated: 2013/09/13 14:39:43 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char x);

void ft_is_negative(int n)
{
	char p;
	
	n = 'N';
	p = 'P';
	if (n < 0 ) {
		ft_putchar(n);
	}
	else  {
		ft_putchar(p);
	}

}
