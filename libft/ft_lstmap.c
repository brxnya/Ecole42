/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 20:42:48 by fhanh             #+#    #+#             */
/*   Updated: 2021/10/15 20:42:49 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp1;

	temp1 = NULL;
	if (lst && f)
	{
		while (lst)
		{
			temp = ft_lstnew((*f)(lst->content));
			if (!temp)
			{
				ft_lstclear(&temp1, del);
				return (NULL);
			}
			ft_lstadd_back(&temp1, temp);
			lst = lst->next;
		}
	}
	return (temp1);
}
