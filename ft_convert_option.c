/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_option.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:36:05 by aymoulou          #+#    #+#             */
/*   Updated: 2021/11/20 16:09:50 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_c(va_list arg)
{
	char	c;

	c = (char) va_arg (arg, int);
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_convert_s(va_list arg)
{
	char	*s;

	s = va_arg(arg, char *);
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	ft_convert_di(va_list arg)
{
	int	nbr;

	nbr = va_arg(arg, int);
	ft_putnbr_fd(nbr, 1);
	return (ft_nbr_length(nbr));
}

int	ft_convert_x(va_list arg)
{
	unsigned int	nbr;

	nbr = va_arg(arg, int);
	if (nbr == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	return (ft_convert_hex(nbr));
}

int	ft_convert_xx(va_list arg)
{
	unsigned int	nbr;

	nbr = va_arg(arg, int);
	if (nbr == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	return (ft_convert_hex_upper(nbr));
}
