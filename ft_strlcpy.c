/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:35:14 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 20:26:08 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<string.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*src_firstaddress;

	src_firstaddress = src;
	if (size == 0)
		return (ft_strlen(src));
	while ((size != 1) && (*src != '\0'))
	{
		*dst = (char)*src;
		dst = dst + 1;
		src = src + 1;
		size = size - 1;
	}
	*dst = '\0';
	return (ft_strlen(src_firstaddress));
}
/*
#include<stdio.h>
#include<string.h>
int main(){
    char *str = "BBBB";
    char buff1[0xF00] = "AAAAAAAAAAAAAAAAAAAA";
    char buff2[0xF00] = "AAAAAAAAAAAAAAAAAAAA"; 
	size_t r1;
	size_t r2;

	r1 = strlcpy(buff1, str, sizeof(buff1));
    r2 = ft_strlcpy(buff2, str, sizeof(buff2));

	int i;

	i = 0;
	while(i++ != 20)
		printf("%c\n", buff2[i]);
	printf("%zd\n",r1);
	printf("%zd\n",r2);
}
*/
