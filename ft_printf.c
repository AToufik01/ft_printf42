/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:29:12 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/21 19:11:00 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		cont;

	i = 0;
	cont = 0;
	va_start(args, format);
	if (write(1, "", 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
			ft_print_c(format[i], &cont);
		else if (format[i] == '%' && format[i + 1] == '\0')
			return (0);
		else if (format[i] == '%')
		{
			i++;
			ft_convert(args, format[i], &cont);
		}
		i++;
	}
	va_end(args);
	return (cont);
}
