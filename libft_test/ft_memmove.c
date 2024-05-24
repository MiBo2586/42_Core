/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:23:46 by mborovka          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:48 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (!dest && !src)
		return (0);
	if ((size_t)d - (size_t)s < n)
	{
		i = n - 1;
		while (i >= 1)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
/*
int main (void)
{
    char dest [20] = "ydar";
    char src [20] = "Ahoj Jak je";
    int n = 19;

    printf("%s\n", (unsigned char *) ft_memmove(src, dest, n));
    printf("%s\n", (unsigned char *) memcpy (src, dest, n));
    printf("%s\n", (unsigned char *) memmove (src, dest, n));
    
    return (0);
}
*/
