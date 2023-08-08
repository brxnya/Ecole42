/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 00:31:04 by fhanh             #+#    #+#             */
/*   Updated: 2021/10/12 00:31:06 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*res;
	size_t	index;

	if (!s1 || !s2)
	{
		res = ft_substr("", 0, 1);
		ft_bzero (res, 1);
		return (res);
	}
	res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (res == NULL)
		return (NULL);
	index = 0;
	while (*s1)
		res[index++] = *s1++;
	while (*s2)
		res[index++] = *s2++;
	res[index] = '\0';
	return (res);
}
