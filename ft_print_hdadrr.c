/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hdadrr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:11:35 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/18 09:24:01 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hdadrr(unsigned long n, int *cont)
{
	if (n > 15)
	{
		ft_print_hdadrr(n / 16, cont);
		ft_print_hdadrr(n % 16, cont);
	}
	else
		ft_print_c(HEXADL[n], cont);
}
