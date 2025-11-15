/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:31:12 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/15 19:54:39 by dcheng           ###   ########.fr       */
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

int	ft_putnbr_pf(int n)
{
	int		i;
	char	*str;

	str = ft_itoa(n);
	if (!str)
		return (0);
	i = ft_putstr_pf(str);
	free (str);
	return (i);
}

int	ft_putunbr_pf(unsigned int n)
{
	int		i;
	char	*str;

	str = ft_uitoa(n);
	if (!str)
		return (0);
	i = ft_putstr_pf(str);
	free (str);
	return (i);
}

int	ft_puthex_pf(unsigned int n, char c)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_puthex_pf(n / 16, c);
	if (c == 'x')
		i += ft_putchar_pf(HEX_LOW[n % 16]);
	else
		i += ft_putchar_pf(HEX_UP[n % 16]);
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
