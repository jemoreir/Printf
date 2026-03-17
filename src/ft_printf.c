/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 20:30:22 by jemoreir          #+#    #+#             */
/*   Updated: 2026/03/17 16:29:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printarg(va_list lista, char arg)
{
	int	count;

	count = 0;
	if (arg == 'c')
		count += ft_putchar(va_arg(lista, int));
	else if (arg == 's')
		count += ft_putstr(va_arg(lista, char *));
	else if (arg == 'p')
		count += ft_print_pointer(va_arg(lista, unsigned long));
	else if (arg == 'd' || arg == 'i')
		count += ft_printnbr(va_arg(lista, int));
	else if (arg == 'u')
		count += ft_print_u(va_arg(lista, unsigned int));
	else if (arg == 'x' || arg == 'X')
		count += ft_print_hex(va_arg(lista, unsigned int), arg);
	else if (arg == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	lista;
	int		i;
	int		r;

	i = 0;
	r = 0;
	if (!str || write(1, 0, 0) == -1)
		return (-1);
	va_start (lista, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '\0')
				return (va_end(lista), -1);
			r += ft_printarg (lista, str[i]);
			i += 1;
		}
		else
			r += ft_putchar (str[i++]);
	}
	va_end (lista);
	return (r);
}
