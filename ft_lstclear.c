/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta- <ricosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 20:22:51 by ricosta-          #+#    #+#             */
/*   Updated: 2022/12/29 20:45:59 by ricosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	tmp = *lst;
	if (!lst || !*lst || !del)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst) -> next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
