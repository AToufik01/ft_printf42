/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nhxd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:31:32 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/18 09:23:44 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nhxd(unsigned int n, int s, int *cont)
{
	if (n / 16 != 0)
	{
		ft_print_nhxd(n / 16, s, cont);
		ft_print_nhxd(n % 16, s, cont);
	}
	else
	{
		if (s == 0)
			ft_print_c(HEXADU[n], cont);
		if (s == 1)
			ft_print_c(HEXADL[n], cont);
	}
}
