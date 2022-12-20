/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mair <mair@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:45:18 by mair              #+#    #+#             */
/*   Updated: 2022/12/14 18:06:15 by mair             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int     ft_memcmp(const void *str1, const void *str2, size_t n)
{
    while (i < n)
    {
        if (((unsigned char*)s1)[i] != ((unsigned char *)s2[i]))
            return ((unsigned char *)s1[i] - ((unsigned char *)s2)[i]);
        i++;
    }
    return (0);
}