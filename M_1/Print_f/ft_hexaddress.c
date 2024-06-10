/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-10 08:56:36 by mborovka          #+#    #+#             */
/*   Updated: 2024-06-10 08:56:36 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int  ft_add(unsigned long n, const char *base)
{
    int i;

    i = 0;
    if (n > ft_strlen(base) - 1)
        i += rec_print(n/(ft_strlen(base)), base);
	i += ft_putchar(*(base + (n % ft_strlen(base))));
	return (i);
}

int ft_hexaaddress (void *format)
{
    unsigned long   n;
    const char      *base;
    int             len;

    n = (unsigned long) format;
    base = "0123456789abcdef";
    len = ft_putstr ("0x");
    len += ft_add (n, base);
    return (len);
}