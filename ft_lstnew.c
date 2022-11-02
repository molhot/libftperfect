/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:41:28 by satushi           #+#    #+#             */
/*   Updated: 2022/10/19 01:37:01 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void (*content))
{
	t_list	*return_tlist;

	return_tlist = (t_list *)malloc(sizeof(t_list) * 1);
	if (!(return_tlist))
		return (NULL);
	return_tlist->content = content;
	return_tlist->next = NULL;
	return (return_tlist);
}
