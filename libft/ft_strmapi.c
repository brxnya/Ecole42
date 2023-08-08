/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:58:15 by fhanh             #+#    #+#             */
/*   Updated: 2021/10/15 11:58:16 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	i = 0;
	if (!s)
		return (NULL);
	res = (char *)malloc(ft_strlen(s) + 1);
	if (res == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		res[i] = ((*f)((unsigned int)i, s[i]));
		i++;
	}
	res[ft_strlen(s)] = '\0';
	return (res);
}
