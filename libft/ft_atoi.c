/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:04:50 by fhanh             #+#    #+#             */
/*   Updated: 2021/10/10 18:21:21 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_spaces(const char *str)
{
	if (*str == ' ' || *str == '\t' || *str == '\n' || \
	*str == '\v' || *str == '\f' || *str == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long long int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (check_spaces(str))
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (sign == 1 && num < 0)
		return (-1);
	if (sign == -1 && num < 0)
		return (0);
	return ((int)(num * sign));
}
