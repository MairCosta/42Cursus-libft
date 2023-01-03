/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:15:12 by ricosta-          #+#    #+#             */
/*   Updated: 2022/12/19 17:04:20 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmps;
	unsigned char	tmpc;

	tmps = (unsigned char *)str;
	tmpc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (tmps[i] == tmpc)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
