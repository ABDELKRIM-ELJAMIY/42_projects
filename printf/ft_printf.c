/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karubuntu <karubuntu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 21:14:04 by karubuntu         #+#    #+#             */
/*   Updated: 2026/11/05 22:04:44 by karubuntu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter += ft_putchar(va_arg(args, int));
	else if (c == 's')
		counter += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		counter += ft_putptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		counter += ft_putint(va_arg(args, int));
	else if (c == 'u')
		counter += ft_putunsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		counter += ft_puthex(va_arg(args, unsigned int),
				"0123456789abcdef");
	else if (c == 'X')
		counter += ft_puthex(va_arg(args, unsigned int),
				"0123456789ABCDEF");
	else if (c == '%')
		counter += ft_putchar('%');
	return (counter);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		total;
	va_list	args;

	if (!str)
		return (-1);
	i = 0;
	total = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
			total += check_format(str[++i], args);
		else
			total += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (total);
}