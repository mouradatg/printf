/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:45:39 by mattig            #+#    #+#             */
/*   Updated: 2021/12/18 11:52:01 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_check_format(char c, va_list *ptr)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(*ptr, int));
	if (c == 's')
		count += ft_putstr(va_arg(*ptr, char *));
	if (c == '%')
		count += ft_putchar('%');
	if (c == 'i' || c == 'd')
		count += ft_putnbr(va_arg(*ptr, int));
	if (c == 'u')
		count += ft_putnbr_unsigned(va_arg(*ptr, unsigned int));
	if (c == 'x' || c == 'X')
		count += ft_putnbr_hexa(va_arg(*ptr, unsigned int), c);
	if (c == 'p')
	{
		count += ft_putstr("0x");
		count += ft_putnbr_hexa_ptr(va_arg(*ptr, unsigned long));
	}
	return (count);
}
