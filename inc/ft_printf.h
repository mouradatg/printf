/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mattig <mattig@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:08:45 by mattig            #+#    #+#             */
/*   Updated: 2021/12/13 22:28:12 by mattig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
int		ft_putchar(char c);
int		ft_check_format(char c, va_list *ptr);
int		ft_putstr(char *str);
int		ft_putnbr(int nbr);
int		ft_putnbr_unsigned(unsigned int nbr);

#endif
