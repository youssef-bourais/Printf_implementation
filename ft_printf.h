/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:01:52 by ybourais          #+#    #+#             */
/*   Updated: 2022/11/03 11:50:21 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c, int counter);
int		ft_putstr(char *s, int counter);
int		ft_putnbr(int n, int counter);
int		ft_putnbr_unsigned(unsigned int n, int counter);
int		ft_putnbr_hexa(unsigned int n, int counter);
int		ft_putnbr_hexa_upper(unsigned int n, int counter);
int		ft_pointer(unsigned long n, int counter);

#endif
