/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mair <mair@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:46:46 by ricosta-          #+#    #+#             */
/*   Updated: 2022/12/14 17:34:48 by mair             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The atoi() function converts the initial portion of the string pointed 
to by str to int representation.*/

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    res = 0;
    sign = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

int main(int ac, char **av)
{
    int mine;
    int theirs;
    if (ac == 2)
    {
        mine = ft_atoi(av[1]);
        theirs = atoi(av[1]);
        printf("mine: %d\ntheirs: %d\n", mine, theirs);
    }
}