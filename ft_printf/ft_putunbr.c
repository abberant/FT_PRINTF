/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:46:26 by aanouari          #+#    #+#             */
/*   Updated: 2022/11/16 15:14:51 by aanouari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	size_t	len;

	len = 0;
	if (n > 9)
	{
		len += ft_putunbr(n / 10);
		len += ft_putchar(n % 10 + 48);
	}
	if (n >= 0 && n <= 9)
		len += ft_putchar(n + '0');
	return (len);
}
