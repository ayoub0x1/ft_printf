/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:20:13 by aymoulou          #+#    #+#             */
/*   Updated: 2021/11/20 16:12:40 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>

size_t	ft_strlen(const char *s);
int		ft_strchr(char *s, char c);
int		ft_hex_length(int n);
int		ft_nbr_length(int n);
int		ft_unsigned_nbr_length(unsigned int n);
int		ft_convert_hex(size_t nb);
int		ft_convert_hex_upper(unsigned int nb);
int		ft_convert_p(va_list arg);
int		ft_convert_u(va_list arg);
int		ft_convert_c(va_list arg);
int		ft_convert_s(va_list arg);
int		ft_convert_di(va_list arg);
int		ft_convert_x(va_list arg);
int		ft_convert_xx(va_list arg);
int		ft_chose_convert(va_list arg, char c);
int		ft_printf(const char *format, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_unsigned_putnbr_fd(unsigned int n, int fd);
#endif
