/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:31:12 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/17 12:43:09 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(char *s)
{
	if (!s)
		return (write(1, "(null)", 6), 6);
	return (write(1, s, ft_strlen(s)));
}

// int	ft_putnbr_pf 1st version(int nbr)
// {
// 	int			j;
// 	long int	i;

// 	j = 0;
// 	i = nbr;
// 	if (i < 0)
// 	{
// 		j += ft_putchar_pf('-');
// 		i = -i;
// 	}
// 	if (i > 9)
// 		j += ft_putnbr_pf(i / 10);
// 	j += ft_putchar_pf((i % 10) + 48);
// 	return (j);
// }

int	ft_putnbr_pf(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i += write(1, "-", 1);
		n = -n;
	}
	return (i + ft_putunbr_pf((unsigned long)n));
}

int	ft_putunbr_pf(unsigned long n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_putunbr_pf(n / 10);
	i += write(1, &DECIMAL[n % 10], 1);
	return (i);
}

int	ft_putptr_pf(void *ptr)
{
	if (!ptr)
		return (ft_putstr_pf("(nil)"));
	return (ft_putstr_pf("0x") + ft_puthex_pf((unsigned long) ptr, HEX_LOW));
}

int	ft_puthex_pf(unsigned long n, char *base)
{
	char	buffer[32];
	int		i;
	int		j;

	if (n == 0)
		return (write(1, "0", 1));
	i = 0;
	j = 0;
	while (n)
	{
		buffer[j++] = base[n % 16];
		n /= 16;
	}
	while (j--)
		i += write(1, &buffer[j], 1);
	return (i);
}

// #include <stdio.h>

// int	main(void){
// 	ft_putunbr_pf(-1234);
// 	ft_putchar_pf('\n');
// 	ft_putnbr_pf(-1234);
// 	ft_putchar_pf('\n');
// 	ft_putstr_pf("jonkler");
// 	ft_putchar_pf('\n');
// 	ft_puthex_pf(255, 'x');
// 	ft_putchar_pf('\n');
// 	ft_puthex_pf(255, 'X');
// 	ft_putchar_pf('\n');
// }
