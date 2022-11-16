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

void	ft_putunbr(unsigned int n)
{
	size_t	i;

	i = 0;
	if (n > 9)
	{
		i += ft_putunbr(n / 10);
		i += ft_putchar(n % 10 + '0');
	}
	else if (n >= 0 && n <= 9)
		i += ft_putchar(n + '0');
}
