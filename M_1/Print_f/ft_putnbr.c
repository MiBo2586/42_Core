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

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putnbr(unsigned long n, char format)
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
}