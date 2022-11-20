/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanouari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:07:17 by aanouari          #+#    #+#             */
/*   Updated: 2022/11/16 15:15:45 by aanouari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_layout(const char *str, va_list arg);
int 	ft_putchar(char c);
int 	ft_putstr(char *str);
int		ft_putnbr(int n);
int   ft_putunbr(unsigned int n);
int   ft_puthexnbr(unsigned long n, upper);

#endif
