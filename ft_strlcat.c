/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:39:17 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 20:25:47 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*firstaddress;

	firstaddress = dst;
	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	if (ft_strlen((const char *)dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	if (ft_strlen((const char *)dst) + ft_strlen(src) >= dstsize)
		dstsize = dstsize - ft_strlen((const char *)dst);
	while ((*dst) != '\0')
		dst = dst + 1;
	while ((dstsize-- != 1) && (*src != '\0'))
		*dst++ = *src++;
	*dst = '\0';
	return (ft_strlen((const char *)firstaddress) + ft_strlen(src));
}
