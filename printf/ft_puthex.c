/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeljami <abeljami@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:26:21 by abeljami          #+#    #+#             */
/*   Updated: 2026/10/27 11:26:28 by abeljami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nb, char *base)
{
	int	counter;

	counter = 0;
	if (nb >= 16)
		counter += ft_print_hex(nb / 16, base);
	counter += write(1, &base[nb % 16], 1);
	return (counter);
}