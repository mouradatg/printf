/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:45:39 by mattig            #+#    #+#             */
/*   Updated: 2021/12/13 22:27:07 by mattig           ###   ########.fr       */
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
	return (count);
}
