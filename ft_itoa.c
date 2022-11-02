/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:53:25 by satushi           #+#    #+#             */
/*   Updated: 2022/10/30 22:33:07 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter_digit(long num)
{
	int	digit;

	digit = 0;
	if (num < 0)
	{
		digit = digit + 1;
		num = -(num);
	}
	while (num != 0)
	{
		digit = digit + 1;
		num = num / 10;
	}
	return (digit);
}

static char	*insertfunc(long num, char (*box), int counternum)
{
	long	num_c;

	num_c = num;
	if (num < 0)
	{
		counternum = counternum - 1;
		num_c = -(num);
	}
	*box = '\0';
	box = box - 1;
	while (counternum-- != 0)
	{
		*box = num_c % 10 + '0';
		box = box - 1;
		num_c = num_c / 10;
	}
	if (num < 0)
		*box = '-';
	else
		box = box + 1;
	return (box);
}

char	*ft_itoa(int n)
{
	int		counter_num;
	char	*c_b;
	char	*firstaddress;
	long	long_num;

	long_num = (long)n;
	if (n == 0)
		return (ft_strdup("0"));
	counter_num = counter_digit(long_num);
	c_b = (char *)malloc(sizeof(char) * (counter_num + 1));
	if (c_b == NULL)
		return (NULL);
	firstaddress = insertfunc(long_num, c_b + counter_num, counter_num);
	return (firstaddress);
}

/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    //char *i1 = ft_itoa(100);
    //char *i2 = ft_itoa(1);
    char *i3 = ft_itoa(-21474);
	//char *i33 = itoa(-2147483647);
	//printf("%s\n",i1);
	//printf("%s\n",i2);
    printf("%s\n",i3);
	//printf("%s\n",i33);
    //printf("%s\n", i1);
    printf("%ld\n", strlen(i3));
	free(i3);
	//printf("%ld\n",strlen(i33));
	//free(i2);
}
*/