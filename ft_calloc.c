/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:06:16 by satushi           #+#    #+#             */
/*   Updated: 2022/11/05 01:00:50 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*dest;

	if ((n == 0) || (size == 0))
	{
		dest = ft_calloc(1, 1);
		return (dest);
	}
	if (SIZE_MAX / n <= size)
		return (NULL);
	dest = malloc(n * size);
	if (dest == NULL)
		return (dest);
	ft_bzero(dest, n * size);
	return (dest);
}
