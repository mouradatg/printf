/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:05:52 by mattig            #+#    #+#             */
/*   Updated: 2021/12/18 11:09:19 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	main(void)
{
	char ptr[10] = "bobo coco";
	// char c = 'C';
	// char *str = "dgsdsds";

	int a = printf("test hexa -> %p", ptr);
	printf("\n");
	int b = ft_printf("test hexa -> %p", ptr);
	printf("\nprintf return : %d", a);
	printf("\nmy printf return : %d", b);
	return (0);
}
