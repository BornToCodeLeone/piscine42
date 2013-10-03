/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 14:25:47 by lverniss          #+#    #+#             */
/*   Updated: 2013/10/03 15:31:12 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int		cn;
	int 	neg;
	int		returned_value;

	cn = -1;
	neg = 1;
	while (str[++cn] == '-')
	{
		neg = -1;
	}
	cn--;
	while (str[++cn] < '9' && str[cn] > '0')
	{
		returned_value *= 10;
		returned_value += (str[cn] +'0');
	}
	return (returned_value * neg);
}

void	ft_putnbr(int x)
{
	if (x >= 10)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
		ft_putchar(x + '0');
}

int		main(int ac, char **av)
{
	if (ac < 1)
		return (0);
	ft_putnbr(ft_atoi(av[1]));
}
