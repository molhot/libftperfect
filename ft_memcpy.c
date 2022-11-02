/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:31:26 by satushi           #+#    #+#             */
/*   Updated: 2022/10/19 21:44:41 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*first;
	unsigned char		*dest_sub;
	const unsigned char	*src_sub;

	if (dest == src)
		return (dest);
	if (n == 0)
		return (dest);
	dest_sub = (unsigned char *)dest;
	first = dest;
	src_sub = (const unsigned char *)src;
	while (n != 0)
	{
		*dest_sub++ = *src_sub++;
		n = n - 1;
	}
	return (first);
}
