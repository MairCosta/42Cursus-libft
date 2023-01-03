/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:43:47 by ricosta-          #+#    #+#             */
/*   Updated: 2023/01/02 21:05:30 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	j;

	j = 0;
	if (start > ft_strlen(s))
	{
		sub = malloc(sizeof (char));
		*sub = 0;
		return (sub);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (start < ft_strlen(s) && j < len)
		sub[j++] = s[start++];
	sub[j] = '\0';
	return (sub);
}

//extrai uma porcao da str e devolve como nova str