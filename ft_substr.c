/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:51:04 by satushi           #+#    #+#             */
/*   Updated: 2022/11/05 04:41:07 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substring;
	size_t		i;
	size_t		slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if ((slen == 0) || (slen <= start))
		return (ft_strdup(""));
	if (slen - start < len)
		len = slen - start;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	s = s + start;
	i = 0;
	while (i != len)
	{
		substring[i] = (unsigned char)s[i];
		i = i + 1;
	}
	substring[i] = '\0';
	return (substring);
}

/*
#include<stdio.h>
int main(){
	char *str = "i just want this part #############";
	size_t size = 10;
	char *ret = ft_substr(str, 0, size);

	printf("%s\n",ret);
	printf("%lu\n",strlen(ret));
}
*/
