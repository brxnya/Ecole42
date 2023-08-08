/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 08:16:36 by fhanh             #+#    #+#             */
/*   Updated: 2021/10/15 08:16:38 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennbr(long n)
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

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nl;

	nl = n;
	i = ft_lennbr(nl);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
	{
		return (NULL);
	}
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
	return (str);
}
