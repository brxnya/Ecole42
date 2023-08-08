/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:39:29 by fhanh             #+#    #+#             */
/*   Updated: 2021/11/24 12:39:30 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lennbr(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_pr_int(int n)
{
	char		*str;
	int			i;
	int			len;
	long int	nl;

	nl = n;
	i = ft_lennbr(nl);
	len = i;
	str = malloc(sizeof(char) * (i + 1));
	if (nl < 0)
	{
		nl *= -1;
		str[0] = '-';
	}
	str[i] = '\0';
	if (nl == 0)
		str[--i] = '0';
	while (nl > 0)
	{
		str[--i] = (nl % 10) + '0';
		nl /= 10;
	}
	ft_pr_str(str);
	free(str);
	return (len);
}

int	ft_pr_un_int(unsigned int un_int)
{
	char		*str;
	int			i;
	int			len;
	long int	nl;

	nl = un_int;
	i = ft_lennbr(nl);
	len = i;
	str = malloc(sizeof(char) * (i + 1));
	str[i] = '\0';
	if (nl == 0)
		str[--i] = '0';
	while (nl > 0)
	{
		str[--i] = (nl % 10) + '0';
		nl /= 10;
	}
	ft_pr_str(str);
	free(str);
	return (len);
}
