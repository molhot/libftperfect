/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:29:41 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 20:21:19 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*buf1_s;
	unsigned char	*first;
	unsigned char	*buf2_s;

	if ((buf1 == NULL) && (buf2 == NULL))
		return (NULL);
	buf1_s = (unsigned char *)buf1;
	first = (unsigned char *)buf1;
	buf2_s = (unsigned char *)buf2;
	if (buf1 <= buf2)
	{
		while (n--)
			*buf1_s++ = *buf2_s++;
	}
	else
	{
		buf2_s = buf2_s + n - 1;
		buf1_s = buf1_s + n - 1;
		while (n--)
			*buf1_s-- = *buf2_s--;
	}
	return (first);
}

/*
#include<string.h>
#include<stdio.h>
int main(){
	//char *data = "thiĂ Ă\xde\xad\xbe\xeftriĂąg will be Ă¸vĂŠrlapĂŠd !\r\n";
	char dst1[0xF0];
	char dst2[0xF0];
	int size = 0xF0 - 0xF;

	ft_memmove(dst1 + 3, dst1 ,size);
	memmove(dst2 + 3, dst2, size);

	if(!memcmp(dst1, dst2, size))
		printf("%s", "OK");
	else{
		printf("%s\nrealanser\n", dst1);
		printf("%s\nyouranser\n", dst2);
	}
}
*/
