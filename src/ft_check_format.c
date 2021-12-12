/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:45:39 by mattig            #+#    #+#             */
/*   Updated: 2021/12/12 17:50:02 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_check_format(char c, va_list *ptr)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(*ptr, int));
	else if (c == 's')
		count = ft_putstr(va_arg(*ptr, char *));
	else
	{
		printf("\n Traitement en cours sur ce format \n");
	}
	return (count);
}
