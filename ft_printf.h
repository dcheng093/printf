/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:56:43 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/15 17:37:42 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

# define HEX_UP "0123456789ABCDEF"
# define HEX_LOW "0123456789abcdef"
# define BASE_10 "0123456789"
# define BUFFER_SIZE 1024

int	ft_putchar_pf(char c);
int	ft_putstr_pf(char *s);
int	ft_putnbr_pf(int nbr);
int	ft_putunbr(unsigned int n);
int	ft_printf(const char *str, ...);
int	ft_format(char c, va_list args);
int	ft_puthex(unsigned int n, char c);

#endif