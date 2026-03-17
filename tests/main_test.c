/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 16:29:40 by marvin            #+#    #+#             */
/*   Updated: 2026/03/17 16:29:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int main(void)
{
 	ft_printf("--TESTE %%c--\n");
 	int a = ft_printf("Impressao ft_printf = (%c)\n", 'c');
 	printf("Impressao printf = (%c)\n", 'c');
 	printf("Retorno printf = (%d)\n", a);
 	ft_printf("Retorno ft_printf = (%d)\n", a);

 	ft_printf("\n--TESTE %%s--\n");
 	int b = ft_printf("Impressao ft_printf = (%s)\n", "ola");
 	printf("Impressao printf = (%s)\n", "ola");
 	printf("Retorno printf = (%d)\n", b);
 	ft_printf("Retorno ft_printf = (%d)\n", b);

 	ft_printf("\n--TESTE %%p--\n");
 	int c = ft_printf("Impressao ft_printf = (%p)\n", &c);
 	printf("Impressao printf = (%p)\n", &c);
 	printf("Retorno printf = (%d)\n", c);
 	ft_printf("Retorno ft_printf = (%d)\n", c);

 	ft_printf("\n--TESTE %%d || %%i--\n");
 	int d = ft_printf("Impressao ft_printf = (%%d = %d)\n", 10);
 	int d2 = ft_printf("Impressao ft_printf = (%%i = %i)\n", 10);
 	printf("Impressao printf = (%%d = %d)\n", 10);
 	printf("Impressao printf = (%%i = %i)\n", 10);
 	printf("Retorno printf = (%%d = %d)\n", d);
 	ft_printf("Retorno ft_printf = (%%d = %d)\n", d);
 	printf("Retorno printf = (%%i = %i)\n", d2);
 	ft_printf("Retorno ft_printf = (%%i = %i)\n", d2);

 	ft_printf("\n--TESTE %%u--\n");
 	int e = ft_printf("Impressao ft_printf = (%u)\n", -10);
 	printf("Impressao printf = (%u)\n", -10);
 	printf("Retorno printf = (%d)\n", e);
 	ft_printf("Retorno ft_printf = (%d)\n", e);

 	ft_printf("\n--TESTE %%x || %%X--\n");
 	int f = ft_printf("Impressao ft_printf = (%%x = %x)\n", 10);
 	int f2 = ft_printf("Impressao ft_printf = (%%X = %X)\n", 10);
 	printf("Impressao printf = (%%x = %x)\n", 10);
 	printf("Impressao printf = (%%X = %X)\n", 10);
 	printf("Retorno printf = (%%x = %d)\n", f);
 	printf("Retorno printf = (%%X = %d)\n", f2);
 	ft_printf("Retorno ft_printf = (%%x = %d)\n", f);
    ft_printf("Retorno ft_printf = (%%X = %d)\n", f2);
}
