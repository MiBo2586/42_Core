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

/*#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

int	ft_putnbr(unsigned long n)
{
	int		digits;
	int		len;
	long	k;
	char	s;

	digits = 1;
	len = 0;
	k = n;
	if (k < 0)
	{
		ft_putchar('-');
		k = k * -1;
		len++;
	}
	while (k / digits >= 10)
		digits = digits * 10;
	while (digits >= 1)
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
	ft_putnbr(999);
	printf("%d\n", 999);
	printf("%d", ft_putnbr(999));
	return(0);
}
*/