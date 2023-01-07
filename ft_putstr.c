/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:39:59 by ybourais          #+#    #+#             */
/*   Updated: 2022/11/02 20:43:50 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int counter)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", counter);
		return (counter + 6);
	}
	while (s[i] != '\0')
	{
		write(1, &s[i], sizeof(s[i]));
		counter++;
		i++;
	}
	return (counter);
}
