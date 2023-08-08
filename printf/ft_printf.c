/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:21:49 by fhanh             #+#    #+#             */
/*   Updated: 2021/11/24 12:57:01 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_2(const char *fmt, int count, va_list list)
{
	int	len;

	len = 0;
	if (fmt[count] == 'c')
		len += ft_pr_ch(va_arg(list, int));
	if (fmt[count] == 's')
		len += ft_pr_str(va_arg(list, char *));
	if (fmt[count] == 'p')
		len += ft_pr_pntr(va_arg(list, unsigned long long));
	if (fmt[count] == 'd')
		len += ft_pr_int(va_arg(list, int));
	if (fmt[count] == 'i')
		len += ft_pr_int(va_arg(list, int));
	if (fmt[count] == 'u')
		len += ft_pr_un_int(va_arg(list, unsigned int));
	if (fmt[count] == 'x' || fmt[count] == 'X')
		len += ft_pr_hex(va_arg(list, unsigned int), fmt[count]);
	if (fmt[count] == '%')
		len += ft_pr_ch(fmt[count]);
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	list;
	int		count;
	int		len;

	count = 0;
	len = 0;
	va_start(list, fmt);
	while (fmt[count] != '\0')
	{
		if (fmt[count] == '%')
		{
			count++;
			len += ft_printf_2(fmt, count, list);
		}
		else
			len += ft_pr_ch(fmt[count]);
		count++;
	}
	va_end(list);
	return (len);
}
