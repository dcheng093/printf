/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:31:12 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/14 21:54:26 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_pf(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr_pf("(null)"));
	while (*s)
		i += ft_putchar_pf(*s++);
	return (i);
}

int	ft_putnbr_pf(int nbr)
{
	int			j;
	long int	i;

	j = 0;
	i = nbr;
	if (i < 0)
	{
		j += ft_putchar_pf('-');
		i = -i;
	}
	if (i > 9)
		j += ft_putnbr_pf(i / 10);
	j += ft_putchar_pf((i % 10) + 48);
	return (j);
}

int	ft_putunbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_putunbr(n / 10);
	i += ft_putchar_pf((n % 10) + '0');
	return (i);
}

int	ft_puthex(unsigned int n, char c);

// #include <stdio.h>

// int	main(void){
// 	ft_putnbr_pf(-1234);
// }
