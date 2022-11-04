/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:10:46 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 22:40:11 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;

	len = 0;
	len = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + len));
	while (len != 0)
	{
		if (*(s + len - 1) == (unsigned char)c)
			return ((char *)(s + len - 1));
		len = len - 1;
	}
	return (NULL);
}
