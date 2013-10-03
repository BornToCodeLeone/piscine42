/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 21:20:40 by lverniss          #+#    #+#             */
/*   Updated: 2013/10/03 21:30:35 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		neg;
	int		returned_value;
	int		cn;

	cn = -1;
	neg = 1;
	returned_value = 0;
	while (str[++cn] == '-')
	{
		neg = -1;
	}
	cn--;
	while (str[++cn] <= '9' && str[cn] >= '0')
	{
		returned_value *= 10;
		returned_value += (str[cn] - '0');
	}
	return (returned_value * neg);
}
