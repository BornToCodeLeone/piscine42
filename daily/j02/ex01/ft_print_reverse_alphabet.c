/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/12 14:37:53 by lverniss          #+#    #+#             */
/*   Updated: 2013/09/12 15:30:51 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char x);


void ft_print_reverse_alphabet(void)
{
	int x;
	x = 122+1;
	while( x-- > 97 )
		ft_putchar(x);
	ft_putchar('\n');
	return ;
}
