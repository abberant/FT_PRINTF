/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:46:29 by aanouari          #+#    #+#             */
/*   Updated: 2022/11/16 15:06:29 by aanouari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *str_format, va_list arg)
{
	int	len;

	len = 0;
	if (*str_format == '%')
		len += ft_putchar('%');
	if (*str_format == 'c')
		len += ft_putchar(va_arg(arg, int));
	if (*str_format == 's')
		len += ft_putstr(va_arg(arg, char *));
	if (*str_format == 'd' || *str_format == 'i')
		len += ft_putnbr(va_arg(arg, int));
	if (*str_format == 'u')
		len += ft_putunbr(va_arg(arg, unsigned int));
	if (*str_format == 'x' || *str_format == 'X')
		len += ft_puthexnbr(va_arg(arg, unsigned int));
	if (*str_format == 'p')
	{
		len += ft_putstr("0x");
		len += ft_puthexnbr(va_arg(arg, unsigned long));
	}
	return (len);
}
