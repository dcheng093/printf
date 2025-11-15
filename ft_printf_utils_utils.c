/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:19:48 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/15 20:54:20 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_pf(uintptr_t ptr)
{
	int						len;
	unsigned long			div;

	if (!ptr)
		return (ft_putstr_pf("(nil)"));
	len = 0;
	div = 1;
	while (ptr / div >= 16)
		div *= 16;
	len += ft_putstr_pf("0x");
	while (div > 0)
	{
		len++;
		ft_putchar_pf(HEX_LOW[ptr / div]);
		ptr %= div;
		div /= 16;
	}
	return (len);
}

int	udigit_len(unsigned int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		len;

	len = udigit_len(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
