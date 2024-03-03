/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae-kang <jae-kang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:31:44 by jae-kang          #+#    #+#             */
/*   Updated: 2023/10/24 12:43:13 by jae-kang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		func(char t, va_list *ap, int *count);
int		ft_char(va_list *ap, int *count);
int		ft_str(va_list *ap, int *count);
int		ft_pointer(va_list *ap, int *count);
int		ft_decimal(va_list *ap, int *count);
int		ft_integer(va_list *ap, int *count);
int		ft_udecimal(va_list *ap, int *count);
int		ft_hex_low(va_list *ap, int *count);
int		ft_hex_high(va_list *ap, int *count);
size_t	ft_strlen(const char *str);
int		ft_putnbr_hex(unsigned long long n, char *base, int *count);
int		ft_putnbr_dec(long long n, int *count);

#endif