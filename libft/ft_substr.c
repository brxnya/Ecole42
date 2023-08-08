/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 23:57:00 by fhanh             #+#    #+#             */
/*   Updated: 2021/10/11 23:57:03 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*res;

	index = 0;
	if (!s)
		return (NULL);
	if (ft_strlen((char *)(s + start)) < len)
		len = ft_strlen((char *)(s + start));
	if (start >= ft_strlen(s))
		return (res = ft_strdup(""));
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	while ((index < len))
		res[index++] = s[start++];
	res[index] = '\0';
	return (res);
}
