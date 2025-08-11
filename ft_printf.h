/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemoreir <jemoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:10:05 by jemoreir          #+#    #+#             */
/*   Updated: 2025/05/19 19:00:34 by jemoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *tipo, ...);
int		ft_putchar(int c);
int		ft_putstr(const char *str);
int		ft_hexconv(unsigned long ptr, char a);
int		ft_print_pointer(unsigned long ptr);
int		ft_printnbr(int n);
int		ft_print_u(unsigned int a);
int		ft_print_hex(unsigned long n, char c);

#endif