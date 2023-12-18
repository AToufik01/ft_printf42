/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:15:20 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/18 09:15:21 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEXADL "0123456789abcdef"
# define HEXADU "0123456789ABCDEF"

# include <unistd.h>
# include <stdarg.h>

void	ft_print_c(char c, int *cont);
void	ft_print_str(char *str, int *cont);
void	ft_print_d_i(int n, int *cont);
void	ft_print_u(unsigned int n, int *cont);
void	ft_print_nhxd(unsigned int n, int s, int *cont);
void	ft_print_hdadrr(unsigned long n, int *cont);
void	ft_convert(va_list args, char c, int *cont);
int		ft_printf(const char *format, ...);
#endif
