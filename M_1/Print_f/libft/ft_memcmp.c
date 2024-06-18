/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:23:30 by mborovka          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:33 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;
	while (i < n)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
		{
			c = *(unsigned char *)s1 - *(unsigned char *)s2;
			return (c);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}
/*
int main (void)
{
    const char *a;
    const char *b;
    size_t n;

    a = "Hnllox";
    b = "Hellox";
    n = 2;
    printf("%d\n", ft_memcmp(b, a, n));
    return(0);
}
*/
