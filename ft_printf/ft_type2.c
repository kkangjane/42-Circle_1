/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae-kang <jae-kang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:34:55 by jae-kang          #+#    #+#             */
/*   Updated: 2023/10/23 16:23:04 by jae-kang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_integer(va_list *ap, int *count)
{
	int	n;

	n = va_arg(*ap, int);
	return (ft_putnbr_dec((long long) n, count));
}

int	ft_udecimal(va_list *ap, int *count)
{
	unsigned int	n;

	n = va_arg(*ap, unsigned int);
	return (ft_putnbr_dec((long long) n, count));
}

int	ft_hex_low(va_list *ap, int *count)
{
	unsigned int	n;

	n = va_arg(*ap, unsigned int);
	return (ft_putnbr_hex((unsigned long long) n, "0123456789abcdef", count));
}

int	ft_hex_high(va_list *ap, int *count)
{
	unsigned int	n;

	n = va_arg(*ap, unsigned int);
	return (ft_putnbr_hex((unsigned long long) n, "0123456789ABCDEF", count));
}
