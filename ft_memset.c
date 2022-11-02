/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:26:10 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 20:21:29 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*char_buf;
	unsigned char	*first_address;

	char_buf = (unsigned char *)buf;
	first_address = char_buf;
	if (n == 0)
		return (first_address);
	while (n != 0)
	{
		*char_buf = (unsigned char)ch;
		char_buf = char_buf + 1;
		n = n - 1;
	}
	return (first_address);
}

/*
#include<string.h>
#include<stdio.h>
int main(){
	const int size = 20;
	char b1[0xF00];
	char b2[0xF00];

	memset(b1,'A',size);
	ft_memset(b2,'A',size);
	if(memcmp(b1,b2,0xF00))
		printf("%s","OK");
	else{
		printf("%s\n",b1);
		printf("%s\n",b2);
	}
}
*/
