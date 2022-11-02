/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:57:47 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 21:12:30 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rewrite(const char *src, char *src_2)
{
	while ((*src) != '\0')
	{
		*src_2 = *src;
		src_2 = src_2 + 1;
		src = src + 1;
	}
	*src_2 = '\0';
}

char	*ft_strdup(const char *s)
{
	size_t		len;
	char		*src_sub;

	len = ft_strlen(s);
	src_sub = (char *)malloc(sizeof(char) * (len + 1));
	if (src_sub == NULL)
		return (NULL);
	ft_rewrite(s, src_sub);
	return (src_sub);
}
/*
#include<stdio.h>
int main(){
	char *src = "i just want this part #############";
	size_t size = 22;
	char *ret = ft_strdup(src, 0, size);

	printf("%s",src);
	printf("%s",ret);
}
*/
