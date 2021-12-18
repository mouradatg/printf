/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:40:54 by mattig            #+#    #+#             */
/*   Updated: 2021/12/18 17:13:09 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putnbr(int nbr)
{
	unsigned int	count;

	count = 0;
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr *= -1;
	}
	count += ft_putnbr_unsigned(nbr);
	return (count);
}

int	ft_putnbr_unsigned(unsigned int nbr)
{
	unsigned int	count;

	count = 0;
	if (nbr >= 10)
		count += ft_putnbr_unsigned(nbr / 10);
	count += ft_putchar(nbr % 10 + 48);
	return (count);
}
