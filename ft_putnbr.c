/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:39:00 by ybourais          #+#    #+#             */
/*   Updated: 2022/11/02 19:53:03 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int counter)
{
	if (n < 0)
	{
		n = n * -1;
		counter = ft_putchar('-', counter);
	}
	if (n == INT_MIN)
	{
		counter = ft_putnbr(214748364, counter);
		counter = ft_putnbr(8, counter);
	}
	if (n >= 0 && n < 10)
	{
		counter = ft_putchar(n + '0', counter);
	}
	else if (n >= 10)
	{
		counter = ft_putnbr(n / 10, counter);
		counter = ft_putchar(n % 10 + '0', counter);
	}
	return (counter);
}
