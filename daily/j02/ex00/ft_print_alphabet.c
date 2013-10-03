/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/12 14:37:53 by lverniss          #+#    #+#             */
/*   Updated: 2013/09/12 14:56:48 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_putchar(char x);


void ft_print_alphabet(void)
{
	char x;
	x = 'a' -1;
	while( x++ < 'z' )
		ft_putchar(x);
	ft_putchar('\n');
	return ;
}
