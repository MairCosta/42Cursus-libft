/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:10:31 by mair              #+#    #+#             */
/*   Updated: 2022/12/28 15:43:40 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h.>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (small[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		n = 0;
		while (big[i + n] == small[n] && (i + n) < len)
		{
			if (big[i + n] && small[n])
				return ((char *)&big[i]);
			n++;
		}
		if (small[n])
			return ((char *)big + i);
		i++;
	}
}

/*DESCRIPTION:
    The strnstr() function locates the first occurrence of the null-termi-
nated string s2 in the string s1, where not more than n characters are
searched.  Characters that appear after a `\0' character are not
searched.*/