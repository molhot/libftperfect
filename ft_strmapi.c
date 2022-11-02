/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:30:06 by satushi           #+#    #+#             */
/*   Updated: 2022/11/02 20:52:33 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*first_address;
	char	*altanative_component;
	size_t	strlen;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	strlen = ft_strlen(s);
	altanative_component = (char *)malloc(sizeof(char) * (strlen + 1));
	if (altanative_component == NULL)
		return (NULL);
	first_address = altanative_component;
	while (s[i] != '\0')
	{
		altanative_component[i] = (*f)((unsigned int)i, s[i]);
		i = i + 1;
	}
	altanative_component[i] = '\0';
	return (first_address);
}
