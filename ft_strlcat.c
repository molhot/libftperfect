/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:39:17 by satushi           #+#    #+#             */
/*   Updated: 2022/11/05 01:14:13 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*firstaddress;
	size_t	dstlen;
	size_t	srclen;

	firstaddress = dst;
	dstlen = ft_strlen((const char *)dst);
	srclen = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (srclen);
	if (dstlen >= dstsize)
		return (srclen + dstsize);
	if (dstlen + srclen >= dstsize)
		dstsize = dstsize - dstlen;
	while ((*dst) != '\0')
		dst = dst + 1;
	while ((dstsize-- != 1) && (*src != '\0'))
		*dst++ = *src++;
	*dst = '\0';
	return (ft_strlen((const char *)firstaddress) + srclen);
}
