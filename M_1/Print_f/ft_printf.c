/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-06 08:40:17 by mborovka          #+#    #+#             */
/*   Updated: 2024-06-06 08:40:17 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_format(va_list args, const char format)
{
	void *p;

	if (format == 'c')
		return (ft_putchar((va_arg(args, int))));
	else if (format == 's')
		return (ft_putstr((va_arg(args, char *))));
	else if (format == 'p')
	{
		p = va_arg(args, void *);
		if (p)
			return (ft_hexaddress(p));
		return (ft_putstr("0x0"));
	}
	else if (format == 'd' || format == 'i')
		return (ft_putnbr((va_arg(args, int))));
	else if (format == 'u')
		return (ft_u_putnbr((va_arg(args, unsigned int))));
	else if (format == 'x' || format == 'X')
		return (ft_puthex (va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_putchar('%'));
	else
		return (-1);
	return(0);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	va_list arg;
	int len_str;

	va_start(arg, format);
	i = 0;
	len_str = 0;
	while (*(format + i))
	{
		if (*(format + i) == '%' && ft_strchr("cspdiuxX%", *(format + i + 1)))
		{
			len_str = len_str + ft_format(arg, *(format + i + 1));
			i++;
		}
		else
			len_str = len_str + ft_putchar(*(format + i));
		i++;
	}
	va_end (arg);
	return (len_str);
}