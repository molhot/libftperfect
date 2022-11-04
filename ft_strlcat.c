/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:39:17 by satushi           #+#    #+#             */
/*   Updated: 2022/11/05 04:08:08 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize == 0)
		return (src_len);
	if (dst_len < dstsize)
	{
		i = 0;
		while (src[i] != '\0' && i + 1 < dstsize - dst_len)
		{
			dst[dst_len + i] = src[i];
			i = i + 1;
		}
		dst[dst_len + i] = '\0';
		return (src_len + dst_len);
	}
	return (src_len + dstsize);
}
