/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
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

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (n > i)
	{
		if (*p == (unsigned char)c)
			return (p);
		i++;
		p++;
	}
	return (NULL);
}
/*
int main (void)
{
    int a;
    const char *b;
    size_t n;

    a = 'i';
    b = "neirheithzacqdasdfasdfbfafda";
    n = 3;
    printf("%s\n", (char *)ft_memchr(b, a, n));
    return(0);
}
*/