/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-10 08:56:18 by mborovka          #+#    #+#             */
/*   Updated: 2024-06-10 08:56:18 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_u_putnbr(unsigned int n)
{
	int				digits;
	unsigned long	k;
	char			s;
	int				len;

	digits = 1;
	len = 0;
	k = n;
	while (k / digits >= 10)
		digits = digits * 10;
	while (digits)
	{
		s = k / digits + 48;
		ft_putchar(s);
		k = k % digits;
		digits = digits / 10;
		len++;
	}
	return (len);
}

/*
int	main(void)
{
	ft_u_putnbr(4294967295);
	return(0);
}
*/