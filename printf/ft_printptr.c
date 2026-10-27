/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeljami <abeljami@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:28:02 by abeljami          #+#    #+#             */
/*   Updated: 2026/10/27 11:28:07 by abeljami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	unsigned long	addr;
	int				counter;

	if (!ptr)
		return (write(1, "(nil)", 5));
	counter = write(1, "0x", 2);
	addr = (unsigned long) ptr;
	counter += ft_print_hex(addr, "0123456789abcdef");
	return (counter);
}