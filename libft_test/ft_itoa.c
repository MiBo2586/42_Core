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

static long int ft_ncount(n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n/10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int buffer;
	char *p;
	int	i;

	i = 0;
	buffer = ft_ncount(n);
	printf("%d\n", buffer);
	if (n<0)
		buffer= buffer +1;
	printf("%d\n", buffer);
	p = (char *)malloc (sizeof(char *) * (buffer + 1));
	if (!p)
		return(0);
	if (!n)
	{
		p[i] = '0';
		return (p);
	}
	if (n < 0)
	{
		p[0] = '-';
		n = n * -1;
	}
	printf("%s\n", p);
	printf("%d\n", buffer);
	while (buffer != 0)
	{
		p[buffer] = (n%10) + 48;
		n = n/10;
		buffer--;
	}
	return(p);
}

int main (void)
{
	printf("%s\n", ft_itoa(-564));
	return(0);
}