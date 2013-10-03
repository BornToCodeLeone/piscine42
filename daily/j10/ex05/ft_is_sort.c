/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <lverniss@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/26 22:48:27 by lverniss          #+#    #+#             */
/*   Updated: 2013/09/26 23:28:37 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int(*f)(int, int));
{
	int		count[4];

	count[0] = 0;
	count[1] = 0;
	count[2] = 0;
	count[3] = 0;
	while ( count[0] != length)
	{
		if (f(tab[count[0]], tab[count[0] + 1] == 0))
			++count[1];
		else if (f(tab[count[0]], tab[count[0] + 1] < 0))
			++count[2];
		else if (f(tab[count[0]], tab[count[0] + 1]) > 0)
			++count[3];
		++count[0]
	}
	count[1] += count[2];
	count[2] += count[3];
	if (length >= 2 && count[0] == count[1] || count[0] == count[2] ||
		   	count[0] == count[3])
		return (1);
	return (0);

}
