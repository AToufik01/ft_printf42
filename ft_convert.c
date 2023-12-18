/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:34:02 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/18 09:55:07 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_idu(va_list args, long n, char c, int *cont)
{
	if (c == 'd' || c == 'i')
	{
		n = va_arg(args, int);
		ft_print_d_i(n, cont);
	}
	if (c == 'u')
	{
		n = va_arg(args, unsigned int);
		ft_print_u(n, cont);
	}
}

void	ft_convert(va_list args, char c, int *cont)
{
	long	n;

	n = 0;
	if (c == 'c')
		ft_print_c(va_arg(args, int), cont);
	else if (c == 's')
		ft_print_str(va_arg(args, char *), cont);
	else if (c == 'd' || c == 'i' || c == 'u')
		ft_convert_idu(args, n, c, cont);
	else if (c == 'p')
	{
		ft_print_str("0x", cont);
		ft_print_hdadrr(va_arg(args, unsigned long), cont);
	}
	else if (c == 'x')
		ft_print_nhxd(va_arg(args, unsigned int), 1, cont);
	else if (c == 'X')
		ft_print_nhxd(va_arg(args, unsigned int), 0, cont);
	else if (c == '%')
		ft_print_c('%', cont);
	else
		ft_print_c(c, cont);
}
