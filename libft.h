/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:46:55 by ricosta-          #+#    #+#             */
/*   Updated: 2022/11/15 14:51:20 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include	<stdio.h>
#include	<unistd.h>
#include	<limits.h>
#include	<stdlib.h>

typedef struct slist
{
	void	*content;
	size_t	*content_size;
}	t_list;

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int		ft_tolower(int c);

int		ft_toupper(int c);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

char	*ft_strchr(const char *str, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif