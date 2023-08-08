/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:19:45 by fhanh             #+#    #+#             */
/*   Updated: 2021/11/24 10:55:29 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pr_ch(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_pr_str(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_pr_str("(null)"));
	while (s[i])
	{
		i += ft_pr_ch(s[i]);
	}
	return (i);
}

void	ft_pr_hex_check(unsigned long long p, char key)
{
	if (p > 15)
	{
		ft_pr_hex_check(p / 16, key);
		ft_pr_hex_check(p % 16, key);
	}
	else
	{
		if (p <= 9)
			ft_pr_ch(p + '0');
		else
		{
			if (key == 'X')
				ft_pr_ch(p + 55);
			else
				ft_pr_ch(p + 87);
		}
	}
}

int	ft_pr_pntr(unsigned long long p)
{
	int					i;
	char				key;
	unsigned long long	p1;

	key = 'p';
	i = 2;
	ft_pr_str("0x");
	p1 = p;
	while (p1 / 16)
	{
		p1 /= 16;
		i++;
	}
	if (p1 <= 15)
		i++;
	ft_pr_hex_check(p, key);
	return (i);
}

int	ft_pr_hex(unsigned int p, char key)
{
	int				i;
	unsigned int	p1;

	i = 0;
	p1 = p;
	while (p1 / 16)
	{
		p1 /= 16;
		i++;
	}
	if (p1 <= 15)
		i++;
	ft_pr_hex_check(p, key);
	return (i);
}
