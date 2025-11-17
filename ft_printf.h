/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:56:43 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/17 12:50:59 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

# define HEX_UP "0123456789ABCDEF"
# define HEX_LOW "0123456789abcdef"
# define DECIMAL "0123456789"

int		ft_putnbr_pf(long n);
int		ft_putstr_pf(char *s);
int		ft_putptr_pf(void *ptr);
int		ft_putunbr_pf(unsigned long n);
int		ft_format(char c, va_list args);
int		ft_printf(const char *format, ...);
int		ft_puthex_pf(unsigned long n, char *base);

#endif