/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/26 03:53:29 by lverniss          #+#    #+#             */
/*   Updated: 2013/09/26 04:03:58 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int(*f)(char*))
{
	int		count;
	int		nb;

	count = 0;
	nb = 0;

	while (tab[count] != '\0')
	{
		if (f(tab[count]) = 1)
			nb += 1;
		++count;
	}
	return (nb);
}
