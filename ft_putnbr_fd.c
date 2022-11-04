/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:11:55 by satushi           #+#    #+#             */
/*   Updated: 2022/11/05 01:50:45 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digitcounter(long n)
{
	int	digit;

	digit = 0;
	while (n != 0)
	{
		n = n / 10;
		digit = digit + 1;
	}
	return (digit - 1);
}

static void	write_num(long max_numdigit, long n, int fd)
{
	if (max_numdigit >= 10)
	{
		while (max_numdigit >= 10)
		{
			ft_putchar_fd(((n / max_numdigit) + '0'), fd);
			n = n % max_numdigit;
			max_numdigit = max_numdigit / 10;
		}
		ft_putchar_fd(n + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	digit;
	long	n_cp;
	long	max_numdigit;

	n_cp = (long)n;
	if (n_cp == 0 || n_cp == -2147483648)
	{
		if (n_cp == 0)
			ft_putstr_fd("0", fd);
		if (n_cp == -2147483648)
			ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n_cp < 0)
	{
		ft_putchar_fd('-', fd);
		n_cp = n_cp * (-1);
	}
	digit = digitcounter(n_cp);
	max_numdigit = 1;
	while (digit-- != 0)
		max_numdigit = max_numdigit * 10;
	write_num(max_numdigit, n_cp, fd);
	return ;
}

/*
#include <stdio.h>
int  main()
{
	long n;
	int num;

	n = 1;
	num = digitcounter(n);
	printf("%d\n", num);
	int max_numdigit = 1;
	while (num-- != 0)
		max_numdigit = max_numdigit * 10;
	printf("%d\n", max_numdigit);
}
*/