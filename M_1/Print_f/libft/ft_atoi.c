/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:23:46 by mborovka          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:48 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	m;

	n = 1;
	m = 0;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n' || *nptr == '\r'
		|| *nptr == '\t' || *nptr == '\v')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			n = n * -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		m = (m * 10) + (*nptr - 48);
		nptr++;
	}
	m = m * n;
	return (m);
}
/*
int main(void)
{
    printf("Result is: %d\n", ft_atoi("  -654998412e19194tje"));
    return (0);
}
*/