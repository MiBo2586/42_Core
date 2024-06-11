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
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_u_putnbr(unsigned int n)
{
	int		digits;
	unsigned long	k;
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


int	main(void)
{
	ft_u_putnbr(4294967295);
	return(0);
}