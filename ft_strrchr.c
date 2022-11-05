/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:45:01 by ricosta-          #+#    #+#             */
/*   Updated: 2022/11/05 17:34:30 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (str[len] && (char)c != str[len])
		len--;
	if (str[len] == (char)c)
		return ((char *)str + len);
	return (0);
}
