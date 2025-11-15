/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcheng <dcheng@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:56:43 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/15 21:05:37 by dcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include "libft/libft.h"

# define HEX_UP "0123456789ABCDEF"
# define HEX_LOW "0123456789abcdef"

int		ft_putchar_pf(char c);
int		ft_putstr_pf(char *s);
int		ft_putnbr_pf(int nbr);
int		ft_putptr_pf(uintptr_t ptr);
char	*ft_uitoa(unsigned int n);
int		udigit_len(unsigned int n);
int		ft_putunbr_pf(unsigned int n);
int		ft_printf(const char *str, ...);
int		ft_format(char c, va_list args);
int		ft_puthex_pf(unsigned int n, char c);

#endif