/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <mborovka@student.42prague.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-30 17:13:47 by mborovka          #+#    #+#             */
/*   Updated: 2024-05-30 17:13:47 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static long int	ft_ncount(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static long	abs_n(long n)
{
	long	number;

	if (n < 0)
		number = -1 * n;
	else
		number = 1 * n;
	return (number);
}

char	*ft_itoa(int n)
{
	int				buffer;
	char			*p;
	unsigned int	k;
	int				sign;

	sign = 0;
	if (n < 0)
		sign = 1;
	buffer = ft_ncount(n);
	p = (char *)malloc (sizeof(char) * (buffer + 1));
	if (!p)
		return (NULL);
	*(p + buffer) = '\0';
	k = abs_n(n);
	while (buffer--)
	{
		*(p + buffer) = 48 + k % 10;
		k = k / 10;
	}
	if (sign == 1)
		*(p) = 45;
	return (p);
}
/*
int main (void)
{
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(524));
	printf("%s\n", ft_itoa(-10));
	return(0);
}
*/
