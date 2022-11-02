/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:51:04 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 22:46:53 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substring;
	size_t		i;

	if (s == NULL)
		return (NULL);
	if ((ft_strlen(s) == 0) || (ft_strlen(s) <= start))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!(substring))
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
