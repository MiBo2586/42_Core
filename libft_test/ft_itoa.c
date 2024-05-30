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

char	*ft_nstring(char *p, int  buffer, int n)
{
	while ((buffer - 1) != 0)
	{
		p[buffer - 1] = (n%10) + 48;
		n = n/10;
		buffer--;
	}
	return(p);
}

static long int ft_ncount(int n)
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
	if (n<0)
		buffer= buffer + 1;
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
	return(ft_nstring(p, buffer, n));
}
/*
int main (void)
{
	printf("%s\n", ft_itoa(-575485648));
	return(0);
}
*/