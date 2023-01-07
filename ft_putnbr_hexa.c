/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:49:34 by ybourais          #+#    #+#             */
/*   Updated: 2022/11/02 20:12:58 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa(unsigned int n, int counter)
{
	if (n >= 10 && n <= 15)
	{
		if (n == 10)
			counter = ft_putchar('a', counter);
		else if (n == 11)
			counter = ft_putchar('b', counter);
		else if (n == 12)
			counter = ft_putchar('c', counter);
		else if (n == 13)
			counter = ft_putchar('d', counter);
		else if (n == 14)
			counter = ft_putchar('e', counter);
		else if (n == 15)
			counter = ft_putchar('f', counter);
	}
	return (counter);
}

int	ft_putnbr_hexa(unsigned int n, int counter)
{
	if (n < 0)
	{
		counter = ft_putchar('-', counter);
		n = n * (-1);
		counter = ft_putnbr_hexa(n, counter);
	}
	if (n > 9 && n < 16)
	{
		counter = ft_hexa(n, counter);
	}
	else if (n > 15)
	{
		counter = ft_putnbr_hexa(n / 16, counter);
		counter = ft_putnbr_hexa(n % 16, counter);
	}
	else
		counter = ft_putchar(n + '0', counter);
	return (counter);
}
