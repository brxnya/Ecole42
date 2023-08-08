/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:47:23 by fhanh             #+#    #+#             */
/*   Updated: 2021/12/04 23:47:24 by fhanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE
# endif

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const	char *s);

char	*ft_line(char *rest);
char	*get_next_line(int fd);
char	*get_next_rest(char *rest);
char	*ft_read(char *rest, int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
int		main(void);

#endif
