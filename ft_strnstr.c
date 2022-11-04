/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:17:27 by satushi           #+#    #+#             */
/*   Updated: 2022/11/05 04:37:50 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strstr_2(const char *s1, const char *s2, size_t len)
{
	size_t	sub_len;

	sub_len = ft_strlen(s2);
	if (len < sub_len)
		return (1);
	while (len != 0)
	{
		if ((*s1) != (*s2))
			return (1);
		s1 = s1 + 1;
		s2 = s2 + 1;
		len = len - 1;
		sub_len = sub_len - 1;
		if (sub_len == 0)
			return (0);
	}
	return (0);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int		checker;

	if (((s1 == NULL) && (len == 0)) || ((*s1 == '\0') && (*s2 != '\0')))
		return (NULL);
	checker = 1;
	if (*s2 == '\0')
		return ((char *)(s1));
	while ((len != 0) && ((*s1) != '\0'))
	{
		if ((*s1) == (*s2))
		{
			checker = ft_strstr_2(s1, s2, len);
			if (checker == 0)
				return ((char *)s1);
		}
		s1 = s1 + 1;
		len = len - 1;
	}
	return (NULL);
}

/*
#include<stdio.h>
#include<string.h>
int main(){
    char *s1 = "aaaaa";
    char *s2 = "aaaaa";
    size_t max = ft_strlen(s2);
    char *tester1;
    tester1 = strnstr(s1, s2, -1);
    char *tester2;
    tester2 = ft_strnstr(s1, s2, -1);

    //if (tester1 == tester2){
        //printf("%s\n", "OK");
		//printf("%d\n",(int)strlen(tester1));
		printf("%s\n",tester1);
		//printf("%d\n",(int)strlen(tester2));
		printf("%s\n",tester2);
	//}
    //else{
        //printf("%s\n",tester1);
		//printf("%s\n",tester2);
	//}
}
*/
