/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 14:59:55 by mattig            #+#    #+#             */
/*   Updated: 2021/12/11 19:08:15 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_printf(const char *input, ...)
{
	(void) input;
	write(1, "c\n", 2);
	return (0);

	//TODO: Lire la chaine de caractere 
	//TODO: Check le c deriere le % (voit avec va_list ??)
	//TODO: TRaiter en focntion 
	//TODO: Return le nombre en fonction 
}
