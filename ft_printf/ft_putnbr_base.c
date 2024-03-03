/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae-kang <jae-kang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:48:17 by jae-kang          #+#    #+#             */
/*   Updated: 2023/10/23 16:55:44 by jae-kang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_pdec(long long n, int *count);

int	ft_putnbr_dec(long long n, int *count)
{
	if (n < 0)
	{
		n *= -1;
		if (write(1, "-", 1) == -1)
			return (-1);
		*count += 1;
	}
	if (n == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		*count += 1;
		return (0);
	}
	if (ft_putnbr_pdec(n, count) == -1)
		return (-1);
	return (0);
}

static int	ft_putnbr_pdec(long long n, int *count)
{
	char		c;
	long long	div;
	long long	copyn;

	copyn = n;
	div = 1;
	while (copyn > 0)
	{
		copyn /= 10;
		div *= 10;
	}
	div /= 10;
	while (div >= 1)
	{
		c = n / div + '0';
		if (write(1, &c, 1) == -1)
			return (-1);
		*count += 1;
		n %= div;
		div /= 10;
	}
	return (0);
}

int	ft_putnbr_hex(unsigned long long n, char *base, int *count)
{
	int			i;
	int			base_size;
	int			result[16];

	base_size = 16;
	if (n == 0)
	{
		if (write(1, "0", 1) == -1)
			return (-1);
		*count += 1;
	}
	i = 0;
	while (n > 0)
	{
		result[i++] = n % base_size;
		n /= base_size;
	}
	i--;
	while (i >= 0)
	{
		if (write(1, &base[result[i--]], 1) == -1)
			return (-1);
		*count += 1;
	}
	return (0);
}
