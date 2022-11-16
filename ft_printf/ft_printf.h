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

int		ft_printf(const char *str_format, ...);
int		ft_format(const char *str_format, va_list arg);
char	ft_putchar(char c);
char	ft_putstr(char *s);
int		ft_putnbr(int n);
void	ft_putunbr(unsigned int n);
void	ft_puthexnbr(unsigned long n);

#endif
