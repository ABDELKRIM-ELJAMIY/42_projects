/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeljami <abeljami@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:23:33 by abeljami          #+#    #+#             */
/*   Updated: 2026/10/27 11:23:44 by abeljami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_len(long nb)
{
	int	counter;

	counter = 0;
	if (nb < 0)
	{
		nb = -nb;
		counter++;
	}
	if (nb == 0)
		counter = 1;
	else
	{
		while (nb > 0)
		{
			nb = nb / 10;
			counter++;
		}
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = get_len(nb);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (len > (n < 0))
	{
		len--;
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}