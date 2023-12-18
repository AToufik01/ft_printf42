/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:33:47 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/17 18:21:46 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_d_i(int n, int *cont)
{
	if (n == -2147483648)
	{
		ft_print_c('-', cont);
		ft_print_str("2147483648", cont);
		return ;
	}
	else if (n < 0)
	{
		n *= -1;
		ft_print_c('-', cont);
		ft_print_d_i(n, cont);
	}
	else if (n > 9)
	{
		ft_print_d_i(n / 10, cont);
		ft_print_d_i(n % 10, cont);
	}
	else
		ft_print_c(n + '0', cont);
}
