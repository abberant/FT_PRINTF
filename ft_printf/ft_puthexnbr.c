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

void	ft_puthexnbr(unsigned long n)
{
	char	*c;

	c = "0123456789abcdef";
	if (n >= 16)
	{
		n = ft_puthexnbr(n / 16);
		n = ft_puthexnbr(n % 16);
	}
	else
		write(1, &c[n], 1);
}
