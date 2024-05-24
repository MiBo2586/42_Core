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
	size_t	i;

	i = 0;
	if ((!src || !dst) && !size)
		return (0);
	dstsize = ft_strlen(dst);
	if (size > 0)
	{
		while (src[i] != '\0' && (dstsize + i) < (size -1))
		{
			dst[dstsize + i] = src[i];
			i++;
		}
		dst[dstsize + i] = '\0';
	}
	return (dstsize + i);
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
