/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_upper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:42:56 by ybourais          #+#    #+#             */
/*   Updated: 2022/11/02 20:07:50 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa_upper(unsigned int n, int counter)
{
	if (n >= 10 && n <= 15)
	{
		if (n == 10)
			counter = ft_putchar('A', counter);
		else if (n == 11)
			counter = ft_putchar('B', counter);
		else if (n == 12)
			counter = ft_putchar('C', counter);
		else if (n == 13)
			counter = ft_putchar('D', counter);
		else if (n == 14)
			counter = ft_putchar('E', counter);
		else if (n == 15)
			counter = ft_putchar('F', counter);
	}
	return (counter);
}

int	ft_putnbr_hexa_upper(unsigned int n, int counter)
{
	if (n < 0)
	{
		counter = ft_putchar('-', counter);
		n = n * (-1);
		counter = ft_putnbr_hexa_upper(n, counter);
	}
	if (n > 9 && n < 16)
	{
		counter = ft_hexa_upper(n, counter);
	}
	else if (n > 15)
	{
		counter = ft_putnbr_hexa_upper(n / 16, counter);
		counter = ft_putnbr_hexa_upper(n % 16, counter);
	}
	else
		counter = ft_putchar(n + '0', counter);
	return (counter);
}
