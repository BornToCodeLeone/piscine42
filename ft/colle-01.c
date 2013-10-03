/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/14 11:59:31 by lverniss          #+#    #+#             */
/*   Updated: 2013/09/14 13:21:20 by fkalb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_line(char *all, int len)
{
	ft_putchar(all[0]);
	if (len < 2)
	{
		ft_putchar('\n');
		return ;
	}
	while (len - 2 >= 1)
	{
		ft_putchar(all[1]);
		len = len - 1;
	}
	ft_putchar(all[2]);
	ft_putchar('\n');
}

void	colle(int x, int y)
{
	char	*top;
	char	*mid;
	char	*bot;

	top = "/*\\";
	mid = "* *";
	bot = "\\*/";
	if (x <= 0)
	{
		return ;
	}
	ft_print_line(top, x);
	while (y - 2 >= 1)
	{
		ft_print_line(mid, x);
		y = y - 1;
	}
	if (y > 1)
	{
		ft_print_line(bot, x);
	}
	ft_putchar('\n');
}
