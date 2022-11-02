/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:40:23 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 22:34:57 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list (*lst))
{
	size_t		counter;
	t_list		*next_lst;

	if (!lst)
		return (0);
	next_lst = lst;
	counter = 0;
	while (next_lst->next != NULL)
	{
		counter = counter + 1;
		next_lst = next_lst->next;
	}
	return (counter + 1);
}
