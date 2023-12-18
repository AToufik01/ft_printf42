/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:00:08 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/17 17:38:31 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(char *str, int *cont)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_print_str("(null)", cont);
		return ;
	}
	while (str[i])
	{
		ft_print_c(str[i], cont);
		i++;
	}
}
