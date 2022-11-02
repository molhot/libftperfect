/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:07:45 by satushi           #+#    #+#             */
/*   Updated: 2022/10/15 20:31:33 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*str_remake;

	str_remake = (char *)str;
	while (n != 0)
	{
		*str_remake = '\0';
		str_remake = str_remake + 1;
		n = n - 1;
	}
}
