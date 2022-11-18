/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:21:19 by aanouari          #+#    #+#             */
/*   Updated: 2022/11/16 14:44:55 by aanouari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;

	len = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
			len += ft_format(str + 1, arg);
		else
			len += ft_putchar(*str);
		if (*str)
			str++;
	}
	va_end(arg);
	return (len);
}
