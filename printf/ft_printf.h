/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeljami <abeljami@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:24:10 by abeljami          #+#    #+#             */
/*   Updated: 2026/10/27 11:24:41 by abeljami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
int	ft_printf(const char *str, ...);
int	ft_putptr(void *ptr);
int	ft_putchar(char c);
int	ft_puthex(unsigned long nb, char *base);
int	ft_putint(int n);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_putunsigned(unsigned int nb);
int	ft_strlen( const char *str);
char	*ft_itoa(int n);

#endif