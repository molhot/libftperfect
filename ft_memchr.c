/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:38:39 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 20:20:36 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned char	*src_sub;

	src_sub = (unsigned char *)buf;
	while (n != 0)
	{
		if (*src_sub == (unsigned char)ch)
			return (src_sub);
		src_sub = src_sub + 1;
		n = n - 1;
	}
	return (NULL);
}
