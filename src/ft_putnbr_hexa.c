/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:10:29 by mattig            #+#    #+#             */
/*   Updated: 2021/12/18 11:52:18 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putnbr_hexa(unsigned int nbr, int upper)
{
	int	count;

	count = 0;
	if (nbr >= 16)
		count += ft_putnbr_hexa(nbr / 16, upper);
	if (upper == 'x')
		count += ft_putchar("0123456789abcdef"[nbr % 16]);
	else
		count += ft_putchar("0123456789ABCDEF"[nbr % 16]);
	return (count);
}

int	ft_putnbr_hexa_ptr(unsigned long nbr)
{
	int	count;

	count = 0;
	if (nbr >= 16)
		count += ft_putnbr_hexa_ptr(nbr / 16);
	count += ft_putchar("0123456789abcdef"[nbr % 16]);
	return (count);
}
