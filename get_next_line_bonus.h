/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:14:25 by lixu              #+#    #+#             */
/*   Updated: 2022/05/07 11:39:40 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

//functions allowed.
void	*malloc(size_t size);
void	free(void *ptr);
ssize_t	read(int fildes, void *buf, size_t nbyte);

//functions in Libft and get_next_line_utils.c
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_calloc(size_t count, size_t size);

//functions in get_next_line.c
char	*get_buf_read(void);
char	*get_stash(int fd, char *buf_read, char *stash);
char	*get_line(char *stash, char	*buf_read, int i);
char	*get_next_line(int fd);

#endif
