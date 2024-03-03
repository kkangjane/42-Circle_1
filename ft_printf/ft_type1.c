/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae-kang <jae-kang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:20:43 by jae-kang          #+#    #+#             */
/*   Updated: 2023/10/23 16:18:32 by jae-kang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(va_list *ap, int *count)
{
	unsigned char	c;

	c = va_arg(*ap, int);
	if (write(1, &c, 1) == -1)
		return (-1);
	*count += 1;
	return (0);
}

int	ft_str(va_list *ap, int *count)
{
	char	*str;
	size_t	i;

	i = 0;
	str = va_arg(*ap, char *);
	if (str == 0)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		*count += 6;
		return (0);
	}
	*count += ft_strlen(str);
	while (str[i])
		if (write(1, &str[i++], 1) == -1)
			return (-1);
	return (0);
}

int	ft_pointer(va_list *ap, int *count)
{
	void	*ptr;

	ptr = va_arg(*ap, void *);
	if (write(1, "0x", 2) == -1)
		return (-1);
	*count += 2;
	return (ft_putnbr_hex((unsigned long long) ptr, "0123456789abcdef", count));
}

int	ft_decimal(va_list *ap, int *count)
{
	int	n;

	n = va_arg(*ap, int);
	return (ft_putnbr_dec((long long) n, count));
}
