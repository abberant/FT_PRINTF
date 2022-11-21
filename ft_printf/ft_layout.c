/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_layout.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:46:29 by aanouari          #+#    #+#             */
/*   Updated: 2022/11/16 15:06:29 by aanouari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_layout(const char *str, va_list arg)
{
	int	len;

	len = 0;
	if (*str == 'c')
		len += ft_putchar(va_arg(arg, int));
	if (*str == 's')
		len += ft_putstr(va_arg(arg, char *));
	if (*str == 'd' || *str == 'i')
		len += ft_putnbr(va_arg(arg, int));
	if (*str == 'u')
		len += ft_putunbr(va_arg(arg, unsigned int));
	if (*str == 'X' || *str == 'x')
		len += ft_puthexnbr(va_arg(arg, unsigned int), *str == 'X');
	if (*str == 'p')
	{
		len += ft_putstr("0x");
		len += ft_puthexnbr(va_arg(arg, unsigned long), 0);
	}
	if (*str == '%')
		len += ft_putchar('%');
	return (len);
}
