/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:30:11 by fhanh             #+#    #+#             */
/*   Updated: 2021/10/10 16:52:57 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	i = 0;
	ptr = dst;
	ptr2 = (char *)src;
	if (!ptr && !ptr2)
		return (NULL);
	while (i < n)
	{
		*(ptr + i) = *(ptr2 + i);
		i++;
	}
	return (dst);
}
