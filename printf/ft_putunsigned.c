/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeljami <abeljami@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:28:58 by abeljami          #+#    #+#             */
/*   Updated: 2026/10/27 11:29:02 by abeljami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int		counter;
	char	c;

	counter = 0;
	if (nb >= 10)
		counter += ft_print_unsigned(nb / 10);
	c = (nb % 10) + '0';
	counter += write(1, &c, 1);
	return (counter);
}