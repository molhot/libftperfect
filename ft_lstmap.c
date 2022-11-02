/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:19:40 by satushi           #+#    #+#             */
/*   Updated: 2022/10/31 19:36:36 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list (*lst), void *(*f)(void *), void (*del)(void *))
{
	t_list	*iterate_list;

	if (!f || !lst || !del)
		return (NULL);
	iterate_list = NULL;
	while (lst != NULL)
	{
		ft_lstadd_back(&iterate_list, ft_lstnew(f(lst->content)));
		if (iterate_list == NULL)
		{
			ft_lstclear(&iterate_list, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (iterate_list);
}
