/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:59:55 by mattig            #+#    #+#             */
/*   Updated: 2021/12/12 11:11:53 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list ap;

	va_start(ap, input);

	while (*input)
	{
		if (*input == '%')
		{
			input++;
			// Check Format caractere
		}
		else
		{
			ft_putchar_fd(*input, 1);
		}
		input++;
	}

	//TODO: Lire la chaine de caractere 
	//TODO: Check le c deriere le % (voit avec va_list ??)
	//TODO: TRaiter en focntion 
	//TODO: Return le nombre en fonction 
	return (0);
}
