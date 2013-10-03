/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lverniss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 21:51:42 by lverniss          #+#    #+#             */
/*   Updated: 2013/10/03 21:51:43 by lverniss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parser.h"

char	*ft_strncpy(char *dest, const char *src, int n)
{
	int		index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strcut(char *dest, const char *src, int begin, int end)
{
	int		index;

	begin++;
	index = begin;
	while (index < end)
	{
		dest[index - begin] = src[index];
		index++;
	}
	dest[index - begin] = '\0';
	return (dest);
}

int		ft_check_unused_p(char *str)
{
	int		index;
	int		find;

	index = 1;
	find = 1;
	while (str[index] != '\0' && find != 0)
	{
		if (str[index] == '(' && index != 0)
			find++;
		else if (str[index] == ')')
			find--;
		index++;
	}
	if (str[index - 1] == ')' && str[index] == '\0')
		return (1);
	else if (str[index - 1] == ')' && str[index] == ' ')
	{
		while (str[index] == ' ')
			index++;
		if (str[index] == '\0')
			return (1);
	}
	return (0);
}

char	*ft_before_exp(const char *str, int pos)
{
	char	*dest;

	dest = (char *) malloc(sizeof(char) * (pos + 1));
	if (!dest)
		return (NULL);
	dest = ft_strncpy(dest, str, pos);
	return (dest);
}

char	*ft_after_exp(char *str, int pos)
{
	char	*dest;

	dest = (char *) malloc(sizeof(char) * (ft_strlen(str) - pos));
	if (!dest)
		return (NULL);
	dest = ft_strcut(dest, str, pos, ft_strlen(str));
	return (dest);
}
