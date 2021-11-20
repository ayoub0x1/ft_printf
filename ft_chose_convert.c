/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chose_convert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:05:47 by aymoulou          #+#    #+#             */
/*   Updated: 2021/11/20 17:00:44 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chose_convert(va_list arg, char c)
{
	if (c == 'c')
		return (ft_convert_c(arg));
	else if (c == 's')
		return (ft_convert_s(arg));
	else if (c == 'd' || c == 'i')
		return (ft_convert_di(arg));
	else if (c == 'x')
		return (ft_convert_x(arg));
	else if (c == 'X')
		return (ft_convert_xx(arg));
	else if (c == 'p')
		return (ft_convert_p(arg));
	else if (c == 'u')
		return (ft_convert_u(arg));
	else
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}
