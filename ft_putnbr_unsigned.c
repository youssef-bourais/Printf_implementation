/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:57:35 by ybourais          #+#    #+#             */
/*   Updated: 2022/11/02 20:08:01 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, int counter)
{
	if (n >= 0 && n < 10)
	{
		counter = ft_putchar(n + '0', counter);
	}
	else if (n >= 10)
	{
		counter = ft_putnbr_unsigned(n / 10, counter);
		counter = ft_putchar(n % 10 + '0', counter);
	}
	return (counter);
}
