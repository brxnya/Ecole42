/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:21:58 by fhanh             #+#    #+#             */
/*   Updated: 2021/11/24 12:55:23 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_pr_ch(char c);
int		ft_pr_int(int d);
int		ft_lennbr(long n);
int		ft_pr_str(char *s);
int		ft_printf(const char *fmt, ...);
int		ft_pr_un_int(unsigned int un_int);
int		ft_pr_pntr(unsigned long long p);
int		ft_pr_hex(unsigned int p, char key);
int		ft_printf_2(const char *fmt, int count, va_list list);
void	ft_pr_hex_check(unsigned long long p, char key);

#endif
