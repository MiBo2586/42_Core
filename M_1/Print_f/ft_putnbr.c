/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-10 09:03:33 by mborovka          #+#    #+#             */
/*   Updated: 2024-06-10 09:03:33 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

int	ft_putnbr(unsigned long n)
{
	int		digits;
	long	k;
	char	s;

	digits = 1;
	k = n;
	if (k < 0)
	{
		ft_putchar('-');
		k = k * -1;
	}
	while (k / digits >= 10)
		digits = digits * 10;
	while (digits)
	{
		s = k / digits + 48;
		ft_putchar(s);
		k = k % digits;
		digits = digits / 10;
	}
	return (1);
}
/*
int	main(void)
{
	ft_putnbr(-42949);
	return(0);
}
*/