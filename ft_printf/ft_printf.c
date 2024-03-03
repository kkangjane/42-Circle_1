/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae-kang <jae-kang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:39:59 by jae-kang          #+#    #+#             */
/*   Updated: 2023/10/20 20:18:20 by jae-kang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (format && *format)
	{
		if (*format == '%')
		{
			if (func((char)(*(++format)), &ap, &count) == -1)
				return (-1);
		}
		else
		{
			if (write(1, format, 1) == -1)
				return (-1);
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}
