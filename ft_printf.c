/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:01:36 by ybourais          #+#    #+#             */
/*   Updated: 2022/11/02 20:22:47 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	fct(const char *str, int i, va_list list, int counter)
{
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		counter = ft_putnbr(va_arg(list, int), counter);
	if (str[i + 1] == 's')
		counter = ft_putstr(va_arg(list, char *), counter);
	if (str[i + 1] == 'c')
		counter = ft_putchar(va_arg(list, int), counter);
	if (str[i + 1] == 'u')
		counter = ft_putnbr_unsigned(va_arg(list, unsigned int), counter);
	if (str[i + 1] == 'x')
		counter = ft_putnbr_hexa(va_arg(list, int), counter);
	if (str[i + 1] == 'X')
		counter = ft_putnbr_hexa_upper(va_arg(list, int), counter);
	if (str[i + 1] == '%')
		counter = ft_putchar('%', counter);
	if (str[i + 1] == 'p')
	{
		counter = ft_putstr("0x", counter);
		counter = ft_pointer(va_arg(list, unsigned long), counter);
	}
	i++;
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		counter;

	counter = 0;
	va_start(list, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			counter = fct(str, i, list, counter);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			counter++;
		}
		i++;
	}
	va_end(list);
	return (counter);
}
