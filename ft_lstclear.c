/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:55:06 by satushi           #+#    #+#             */
/*   Updated: 2022/10/31 19:18:18 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list (**lst), void (*del)(void*))
{
	t_list	*lst_pointer;

	if (del == NULL || lst == NULL)
		return ;
	while (*lst != NULL)
	{
		lst_pointer = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lst_pointer;
	}
	*lst = NULL;
}
