/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemoreir <jemoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 17:58:46 by jemoreir          #+#    #+#             */
/*   Updated: 2025/05/17 20:31:46 by jemoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long n, char c)
{
	int	i;

	i = 0;
	if (c == 'x')
		i += ft_hexconv(n, 'x');
	else if (c == 'X')
		i += ft_hexconv(n, 'X');
	return (i);
}
