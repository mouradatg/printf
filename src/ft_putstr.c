/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 17:47:04 by mattig            #+#    #+#             */
/*   Updated: 2021/12/18 16:41:31 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	while (str[i] != '\0' && *str)
		ft_putchar(str[i++]);
	return (i);
}
