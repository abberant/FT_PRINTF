/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:58:28 by aanouari          #+#    #+#             */
/*   Updated: 2022/11/16 15:15:25 by aanouari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexnbr(unsigned long n, int upper)
{
	size_t	len;
	char	c;

	len = 0;
	if (n < 16)
	{
		if (n < 10)
			c = n + '0';
		else
			c = n + ('a' - (32 * upper)) - 10;
		len += ft_putchar(c);
	}
	else
	{
		len += ft_puthexnbr(n / 16, upper);
		len += ft_puthexnbr(n % 16, upper);
	}
	return (len);
}
