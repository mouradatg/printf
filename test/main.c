/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:05:52 by mattig            #+#    #+#             */
/*   Updated: 2021/12/16 17:51:40 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	main(void)
{
	int nbr = -14;
	// char c = 'C';
	// char *str = "dgsdsds";

	int a = printf("test hexa -> %X", nbr);
	printf("\n");
	int b = ft_printf("test hexa -> %X", nbr);
	printf("\nprintf return : %d", a);
	printf("\nmy printf return : %d", b);
	return (0);
}
