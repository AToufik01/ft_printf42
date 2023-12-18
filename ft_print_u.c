/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:57:41 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/17 17:08:52 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_u(unsigned int n, int *cont)
{
	if (n > 9)
	{
		ft_print_d_i(n / 10, cont);
		ft_print_d_i(n % 10, cont);
	}
	else
		ft_print_c(n + '0', cont);
}
