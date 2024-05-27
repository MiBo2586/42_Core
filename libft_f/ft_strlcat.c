/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                         :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:23:46 by mborovka          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:48 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;

	if ((!src || !dst) && !size)
		return (0);
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (dstsize >= size)
	{
		dst = size;
		return (dstsize + srcsize);
	}
	if (srcsize < size - dstsize)
		ft_memcpy(dst+dstsize, src, srcsize + 1);
	else
	{
		ft_memcpy(dst+dstsize, src, size - dstsize -1);
		dst[size - 1] = '\0';
	}
	return (dstsize + srcsize);
}
/*
int main (void)
{
    char dest [40];
    const char src [] = "World";
    size_t n = 5;

    printf("%zu\n", ft_strlcat(dest, src, n));
    
    return (0);
}
*/
