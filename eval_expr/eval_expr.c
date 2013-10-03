/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 21:49:47 by lverniss          #+#    #+#             */
/*   Updated: 2013/10/03 21:49:55 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include "ft_opp.h"

int		ft_div_compute(const char *str, int size)
{
	int		i;
	int		pos;
	int		cancel;

	i = 0;
	cancel = 0;
	pos = 0;
	while (i < size)
	{
		if (str[i] == '(')
			cancel++;
		if (str[i] == ')')
			cancel--;
		if (cancel == 0 && (str[i] == '+' || (str[i] == '-'
						&& (str[i + 1] == ' ' || str[i + 1] == '('))))
		{
			if (ft_another_pivot((str + i + 1), (size - i), 'p') == 0)
				return (i);
		}
		if (cancel == 0 && (str[i] == '/' || str[i] == '*' || str[i] == '%'))
			pos = i;
		i++;
	}
	return (pos);
}

int		ft_another_pivot(const char *str, int size, char type)
{
	int		i;
	int		pos;
	int		cancel;

	i = 0;
	cancel = 0;
	pos = 0;
	while (i < size)
	{
		if (str[i] == '(')
			cancel++;
		if (str[i] == ')')
			cancel--;
		if (cancel == 0 && type == 'p' && (str[i] == '+' || (str[i] == '-'
						&& (str[i + 1] == ' ' || str[i + 1] == '('))))
				return (i);
		i++;
	}
	return (pos);
}


char	*ft_ignore_space(char *str)
{
	while (*str == ' ')
		str++;
	return (str);
}

int		eval_expr(char *str)
{
	int		pos;
	char	*before;
	char	*after;
	int		nbspace;

	if (str[0] == ' ')
		return (eval_expr(ft_ignore_space(str)));
	if (str[0] == '(' && ft_check_unused_p(str) != 0)
	{
		str++;
		nbspace = ft_strlen(str) - 1;
		while (str[nbspace] != ')')
		{
			str[nbspace] = '\0';
			nbspace--;
		}
		str[nbspace] = '\0';
		return (eval_expr(str));
	}
	pos = ft_div_compute(str, ft_strlen(str));
	if (pos == 0)
		return (ft_atoi(str));
	before = ft_before_exp(str, pos);
	after = ft_after_exp(str, pos);
	return (ft_compute(before, after, str[pos]));
}

int		ft_compute(char *before, char *after, char sym)
{
	int		index;
	int		result;

	index = 0;
	while (index < 5)
	{
		if (opp[index].sym == sym)
		{
			result = opp[index].f(eval_expr(before), eval_expr(after));
			free(before);
			free(after);
			return (result);
		}
		index++;
	}
	free(before);
	free(after);
	return (0);
}
