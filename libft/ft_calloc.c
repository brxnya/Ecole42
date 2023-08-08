/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:45:29 by fhanh             #+#    #+#             */
/*   Updated: 2021/10/10 18:28:03 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*addr;
	unsigned int	nbytes;

	nbytes = nmemb * size;
	addr = malloc(nbytes);
	if (!addr)
		return (NULL);
	if (addr)
		ft_memset(addr, 0, nbytes);
	return (addr);
}
