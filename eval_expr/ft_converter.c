/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 21:50:26 by lverniss          #+#    #+#             */
/*   Updated: 2013/10/03 21:50:30 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_converter.h"

int		ft_nbrlength(char *str)
{
	int		size;

	size = 0;
	if (*str == '-')
		str++;
	while (*str <= 57 && *str >= 48)
	{
		size++;
		str++;
	}
	return (size);
}

int		ft_atoi(char *str)
{
	int		atoi;
	int		index;

	atoi = 0;
	index = (str[0] == '-') ? 1 : 0;
	while (str[index] <= 57 && str[index] >= 48)
	{
		if ((atoi * 10 + (str[index] - 48) >= 0))
			atoi = (str[index] - 48) + (atoi * 10);
		else if (str[10] == '8')
			atoi = 2147483647;
		index++;
	}
	if (str[0] == '-' && str[1] <= 57 && str[1] >= 48)
	{
		atoi *= -1;
		if (str[10] == '8' && atoi == -2147483647)
			atoi -= 1;
	}
	return (atoi);
}
