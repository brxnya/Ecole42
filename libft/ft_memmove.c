/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:02:43 by fhanh             #+#    #+#             */
/*   Updated: 2021/10/10 16:54:51 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (dst == src)
		return (dst);
	else if (ptr > ptr2)
	{
		while (len--)
			ptr[len] = ptr2[len];
	}
	else
		ft_memcpy(ptr, ptr2, len);
	return (dst);
}
