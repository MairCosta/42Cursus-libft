/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:09:00 by ricosta-          #+#    #+#             */
/*   Updated: 2022/12/28 15:45:26 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	long	nbr;

	size = get_int_size(n);
	nbr = n;
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	*(str + size) = '\0';
	if (nbr == 0)
		str[0] = '0';
	else if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		str[size - 1] = nbr % 10 + '0';
		size --;
		nbr = nbr / 10;
	}
	return (str);
}
