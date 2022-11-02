/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:37:06 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 20:20:48 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	unsigned char	*buf1_sub;
	unsigned char	*buf2_sub;

	if (buf1 == NULL && buf2 == NULL)
		return (0);
	buf1_sub = (unsigned char *)buf1;
	buf2_sub = (unsigned char *)buf2;
	while (n-- != 0)
	{
		if (*buf1_sub != *buf2_sub)
			return (*buf1_sub - *buf2_sub);
		buf1_sub = buf1_sub + 1;
		buf2_sub = buf2_sub + 1;
	}
	return (0);
}

/*
#include<stdio.h>
#include<string.h>
int main(){
	char *s1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
	char *s2 = "\xff\0\0\xaa\0\xde\x00MBS";
	size_t size = 8;
	int i1 = memcmp(s1,s2,size);
	int i2 = ft_memcmp(s1,s2, size);

	printf("%d\n",i1);
	printf("%d\n",i2);
}
*/
