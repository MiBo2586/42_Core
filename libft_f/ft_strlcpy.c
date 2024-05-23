/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:23:46 by mborovka          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:48 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t srcsize;
    size_t i;

    i = 0;
    if (!src || !dst)
        return(0);
    srcsize = ft_strlen(src);
    if (size > 0)
    {
        while (src[i] != '\0' && i < (size -1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (srcsize);
}

int main (void)
{
    char dest [] = "ydar";
    char src [] = "Ap";
    size_t n = 20;

    printf("%zu\n", ft_strlcpy(dest, src, n));
    
    return (0);
}
