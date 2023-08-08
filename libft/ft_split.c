/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:18:11 by fhanh             #+#    #+#             */
/*   Updated: 2021/10/12 14:18:12 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr_word(char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static int	len_4_mall(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != 0 && s[i] != c)
		i++;
	return (i);
}

static char	**clr_arr(char **dst)
{
	int	i;

	i = 0;
	while (dst[i])
	{
		free(dst[i]);
		i++;
	}
	free(dst);
	return (0);
}

static char	**ft_do_split(char **dst, char *s, char c, int word)
{
	int	count;
	int	i;

	count = 0;
	while (count < word)
	{
		i = 0;
		while (*s != 0 && *s == c)
			s++;
		dst[count] = malloc(sizeof(char) * (len_4_mall(s, c) + 1));
		if (!(dst[count]))
			return (clr_arr(dst));
		while (*s != 0 && *s != c)
			dst[count][i++] = *s++;
		if (i != 0)
			dst[count++][i] = 0;
	}
	dst[count] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		len;

	if (!(s))
		return (NULL);
	len = ft_nbr_word((char *)s, c);
	dst = (char **)malloc(sizeof(char *) * (len + 1));
	if (!(dst))
		return (NULL);
	dst = ft_do_split(dst, (char *)s, c, len);
	return (dst);
}
