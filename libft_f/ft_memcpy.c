/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mborovka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:23:46 by mborovka          #+#    #+#             */
/*   Updated: 2024/05/20 14:23:48 by mborovka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *s;
    unsigned char *d;

    i = 0;
    s = ( unsigned char *) src;
    d = (unsigned char *) dest;
    
    if (!dest && !src)
        return(0);
    while (n > i)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}

int main (void)
{
    char dest [20] = "idabgrobgre";
    char src [20] = "ffrgwregwhtw";
    int n = 6;

    printf("%s\n", (unsigned char *) ft_memcpy(dest, src, n));
    printf("%s\n", memcpy ("idabgrobgre","ffrgwregwhtw", 6));
    
    return (0);
}
