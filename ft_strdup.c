/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:01:44 by ricosta-          #+#    #+#             */
/*   Updated: 2022/12/28 17:44:29 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s) + 1;
	ptr = malloc(len * sizeof (char));
	if (!ptr)
		return (NULL);
	else
		ft_memcpy(ptr, s, len);
	return (ptr);
}
