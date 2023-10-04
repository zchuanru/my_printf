/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czheng <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:08:40 by czheng            #+#    #+#             */
/*   Updated: 2023/09/28 17:08:42 by czheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(uintptr_t n, int *count)
{
	if (!n)
		*count += write(1, "(nil)", 5);
	else
	{
		*count += write(1, "0x", 2);
		ft_puthex(n, "0123456789abcdef", count);
	}
}

void	ft_puthex(unsigned long n, const char *str, int *count)
{
	if (n > 15)
	{
		ft_puthex(n / 16, str, count);
		ft_puthex(n % 16, str, count);
	}
	else
		*count += ft_putchar(str[n]);
}

void	ft_putint(long n, int *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		*count += ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putint(nb / 10, count);
		ft_putint(nb % 10, count);
	}
	else
		*count += ft_putchar(nb + '0');
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}
