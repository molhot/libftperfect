/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:01:24 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 22:38:06 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char		src;
	char		*s_2;
	size_t		num;

	s_2 = (char *)s;
	num = ft_strlen(s_2);
	src = (char)c;
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	if (c == '\0')
		return (s_2 + num);
	while (num != 0)
	{
		if ((unsigned char)*s_2 == (unsigned char)src)
			return (s_2);
		num = num - 1;
		s_2 = s_2 + 1;
	}
	return (NULL);
}

/*
#include<stdio.h>
#include<string.h>
int main(){
    char *src = "\0";
    //char *d1 = strchr(src, 'a');
    char *d2 = ft_strchr(src, 'a');

    //printf("%s\n",d1);
    printf("%s\n",d2);
}
*/