/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeljami <abeljami@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:26:59 by abeljami          #+#    #+#             */
/*   Updated: 2026/10/27 11:27:25 by abeljami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	char	*str;
	int		counter;

	str = ft_itoa(n);
	if (!str)
		return (0);
	counter = ft_print_str(str);
	free(str);
	return (counter);
}