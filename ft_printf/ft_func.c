/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae-kang <jae-kang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:15:48 by jae-kang          #+#    #+#             */
/*   Updated: 2023/10/20 20:06:41 by jae-kang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	func(char t, va_list *ap, int *count)
{
	if (t == 'c')
		return (ft_char(ap, count));
	else if (t == 's')
		return (ft_str(ap, count));
	else if (t == 'p')
		return (ft_pointer(ap, count));
	else if (t == 'd')
		return (ft_decimal(ap, count));
	else if (t == 'i')
		return (ft_integer(ap, count));
	else if (t == 'u')
		return (ft_udecimal(ap, count));
	else if (t == 'x')
		return (ft_hex_low(ap, count));
	else if (t == 'X')
		return (ft_hex_high(ap, count));
	else if (t == '%')
	{
		if (write(1, "%%", 1) == -1)
			return (-1);
		*count += 1;
	}
	return (0);
}
