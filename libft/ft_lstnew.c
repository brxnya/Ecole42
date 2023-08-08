/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:21:23 by fhanh             #+#    #+#             */
/*   Updated: 2021/10/15 19:21:25 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*obj;

	obj = (t_list *)malloc(sizeof(*obj));
	if (!(obj))
		return (NULL);
	obj->content = content;
	obj->next = NULL;
	return (obj);
}
