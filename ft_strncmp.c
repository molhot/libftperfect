/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:25:04 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 20:28:26 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (n == 0)
		return (0);
	while ((*s1 != '\0') && (n != 0) && (*s2 != '\0'))
	{
		if ((*s1) != (*s2))
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1 = s1 + 1;
		s2 = s2 + 1;
		n = n - 1;
	}
	if (n == 0)
		return (0);
	if ((n != 0) && (*s1 != *s2))
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}

/*
#include<stdio.h>
#include<string.h>
int main(){
    char *str = "libft-test-tokyo";
	char *cmp = "libft-test-tokyo";
    int i1;
    int i2;
	int len = strlen(str);

    for (int i = 0; i <= len; i++)
	{
		cmp = strndup(str, i);
		printf("%d",ft_strncmp(str, cmp, i));
		printf(" | %d\n-------------------\n",strncmp(str, cmp, i));
		printf("%d",ft_strncmp(str, cmp, len));
		printf(" | %d\n-------------------\n",strncmp(str, cmp, len));
		free(cmp);
	}
}
*/