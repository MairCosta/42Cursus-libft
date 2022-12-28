/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:00:20 by ricosta-          #+#    #+#             */
/*   Updated: 2022/12/23 18:19:20 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	trigger;
	int	count;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (count);
}

char	*put_word(char const *s, unsigned int str, unsigned int end, size_t l)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = malloc(l + 1);
	if (!sub)
		return (NULL);
	while (str < end)
		sub[i++] = s[str++];
	sub[i] = '\0';
	return (sub);
}

char	**ft_split(char const *s, char c)
{
	char			**split;
	unsigned int	i;
	size_t			end;
	int				split_i;

	split = ((char **)malloc(sizeof(char *) * (word_count(s, c) + 1)));
	if (!split || !s)
		return (NULL);
	i = 0;
	split_i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			end = i;
			while (s[end] && s[end] != c)
				end++;
			split[split_i++] = put_word(s, i, end, end - i);
			i = end;
		}
		else
			i++;
	}
	split[split_i] = NULL;
	return (split);
}
