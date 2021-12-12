/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:59:55 by mattig            #+#    #+#             */
/*   Updated: 2021/12/12 16:44:44 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list	ap;
	int		i;

	va_start(ap, input);
	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			// Check the format
			ft_check_format(input[i + 1]);
			i += 2;
		}
		else
		{
			ft_putchar(input[i]);
			i++;
		}
	}
	//TODO: Lire la chaine de caractere 
	//TODO: Check le c deriere le % (voit avec va_list ??)
	//TODO: TRaiter en focntion 
	//TODO: Definir des Int pour compter les impression
	//TODO: Return le nombre en fonction 
	return (0);
}
